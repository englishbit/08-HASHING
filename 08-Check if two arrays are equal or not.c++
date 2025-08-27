#include<iostream>
#include<map>
using namespace std;
#define max 100000
int a[max]={-1};
int b[max]={-1};


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    map<int ,int>mymap;

    for(int i=0;i<n;i++){
        mymap[a[i]]++;
    }
    
    for(int i=0;i<n;i++){
        mymap[b[i]]--;
    }

    bool flag=true;
    
    for (const auto& pair : mymap) {
        if (pair.second != 0) {
            flag = false;
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
