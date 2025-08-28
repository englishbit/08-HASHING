#include<iostream>
#include<set>
#define max 1000000
using namespace std;
int a[max];
int b[max];
int main(){
    int n,m;
    //logic for taking input
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    //logic for inserting elements into set
    set<int>myset;
    for(int i=0;i<n;i++){
        myset.insert(a[i]);
    }

    set<int>myset2;
    for(int i=0;i<m;i++){
        myset2.insert(b[i]);
    }
    //logic for main idea
    int count=0;
    for(int num:myset){
        if(myset2.find(num)!=myset2.end()){
            count++;
        }
    }
    int minrmv=count+(myset.size()-count)+(myset2.size()-count);
    //logic for output
    cout<<minrmv<<endl;
    
    return 0;
}
