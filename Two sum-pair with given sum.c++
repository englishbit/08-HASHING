#include<iostream>
#include<set>
using namespace std;
#define max 1000000
int a[max];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    set<int>myset;

    int curent;
    for(int i=0;i<n;i++){
        curent=target-a[i];
        if(myset.find(curent)!=myset.end()){
            cout<<"true"<<endl;
            return 0;
        }
        myset.insert(a[i]);
    }

    cout<<"false"<<endl;

    return 0;
}