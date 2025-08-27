#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
#define MAX 1000000
int a[MAX];
int main(){
    //logic for taking input
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //logic for finding minimum and maximum
    int maxx=a[0];
    int minn=a[0];
    for(int i=0;i<n;i++){
        maxx=max(maxx,a[i]);
        minn=min(minn,a[i]);
    }

    //logic for inserting elements into set
    set<int>myset;
    for(int i=0;i<n;i++){
        myset.insert(a[i]);
    }
    

    //logic for main idea
    int count=0;
    for(int i=minn;i<=maxx;i++){
        if(myset.find(i)==myset.end()){
            count++;
        }
    }

    //logic for output
    cout<<count<<endl;

    return 0;

}
