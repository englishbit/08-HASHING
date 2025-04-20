#include<stdio.h>
#define EMT=-1
int main(){
        //logic for taking input
        int n;
        scanf("%d",&n);

        //logic for check spacial case
        if(n<1){
            return -1;
        }

        int arr[n];
        int num[n];
        //logic for taking the input array 

            for(int m=0;m<n;m++){
                scanf("%d",&num[m]);
            }
          
        // filling hashtable with -1

        for(int j=0;j<n;j++){
            arr[j]=EMT;
        }

        //some variable
        int capacity;
        int indx;
        int count=0;


        //logic for hash value and collision 
        for(int i=0;i<n;i++){
            
            capacity=0;
            indx=num[i]%n;
            

                int found=0;
                while(arr[indx]!=EMT){
                    if(arr[indx]==num[i]){
                        found=1;
                        break;
                    }
                     indx=(indx+1)%n;
                     capacity++;

                     if(capacity>=n){
                        printf("the table is full!\n");
                        break;
                     }
                }


                if(capacity<n&&!found){
                    
                    arr[indx]=num[i];
                }
                
        }
        
        //counting the unique elements 
        for(int c=0;c<n;c++){
            if(arr[c]!=EMT){
                count++;
            }
        }
        printf("the number of unique element is %d",count);






    return 0;
}
