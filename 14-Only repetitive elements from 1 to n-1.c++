#include<iostream>
#include<set>
using namespace std;
#define max 1000000
int a[max];
int main(){
int n;
    //logic for takin input
cin>>n;
set<int>myset;
for(int i=0;i<n;i++){
    cin>>a[i];
}
//logic for main idea and output
for(int i=0;i<n;i++){
    if(myset.find(a[i])!=myset.end()){
        cout<<a[i];
        return 0;
    }
    myset.insert(a[i]);
}

return 0;

}
