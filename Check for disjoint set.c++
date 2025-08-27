#include<iostream>
#include<set>
using namespace std;
#define max 100000
int a[max],b[max];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    set<int>myset;
    for(int i=0;i<n;i++){
        myset.insert(a[i]);
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(myset.find(b[i])!=myset.end()){
            flag=false;
        }
    }
    if(flag==true)cout<<"true"<<endl;
    else cout<<"false"<<endl;













    return 0;
}