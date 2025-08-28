#include<iostream>
#include<set>
using namespace std;
#define max 1000000
int a[max],b[max];
int main(){
int n;
cin>>n;
    //logic for takin input
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}

    //logic for inserting elements into set
    set<int>myset;
    
    for(int i=0;i<n;i++){
        myset.insert(a[i]);
        myset.insert(b[i]);
    }
    //logic for output
    for(int num:myset){
        cout<<num<<" ";
    }
    cout<<endl;
    
    return 0;
}
