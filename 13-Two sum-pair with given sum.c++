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
    int target;
    cin>>target;
    set<int>myset;

    //logic for main idea
    int curent;
    for(int i=0;i<n;i++){
        curent=target-a[i];
        if(myset.find(curent)!=myset.end()){
            cout<<"true"<<endl;
            return 0;
        }
        myset.insert(a[i]);
    }

    //logic for output
    cout<<"false"<<endl;

    return 0;

}

