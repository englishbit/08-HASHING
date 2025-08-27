#include<iostream>
#include<set>
using namespace std;
#define max 1000000
int a[max];
int main(){
    int n;
    //logic for taking input
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low,hi;
    cin>>low>>hi;

    //logic for inserting elements into set
    set<int>myset;
    for(int i=0;i<n;i++){
        myset.insert(a[i]);
    }

    //logic for output
    for(int i=low;i<=hi;i++){
        if(myset.find(i)==myset.end()){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}