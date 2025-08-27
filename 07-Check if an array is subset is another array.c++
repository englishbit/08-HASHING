#include<iostream>
#include<set>
using namespace std;
#define max 100000
int a[max]={-1};
int b[max]={-1};
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
    
    set<int>myset;
    for(int i=0;i<n;i++){
        myset.insert(a[i]);
    }
    
    bool flag=true;
    for(int i=0;i<m;i++){
        if(myset.find(b[i])==myset.end()){
            flag=false;
            break;
        }
    }

    if(flag==true){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    return 0;

}

