#include<iostream>
#include<set>
using namespace std;
#define max 100000
int a[max],b[max];
int main(){
    int n;
    //logic for taking input
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    set<int>myset;

    //logic for inserting elements into set
    for(int i=0;i<n;i++){
        myset.insert(a[i]);
    }

    //logic for main idea and output
    for(int i=0;i<n;i++){
        if(myset.find(b[i])!=myset.end()){
            cout<<b[i]<<" ";
        }
    }
    cout<<endl;

    return 0;
}

