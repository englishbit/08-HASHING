#include<stdio.h>

int sec_hah(int key){
    return 7-(key%7);
}



#define EMT=-1
int main(){
         
    // logic for taking input 

        int n;
        scanf("%d",&n);

     //logic for special case

        if(n<=0){
            return -1;
        }
        

        int arr[n];
        int key;
        int rslt_hsh;


        //logic for filling the array with -1

        for(int i=0;i<n;i++){
            arr[i]=EMT;
        }
        
        //logic for hash function
    
        for(int i=0;i<n;i++){
            scanf("%d",&key);
            rslt_hsh=key%n;
            int capacity=0;
            int step=sec_hsh(key);
            

            while(arr[rslt_hsh]!=EMT){
                capacity++;

                
                if(capacity>=n){
                    printf("hash table is full");
                    break;
                }

                rslt_hsh=(rslt_hsh+capacity*step)%n;
                
                

            }
            
            if(capacity<n){
                arr[rslt_hsh]=key;
            }
            

        }


        //logic for printing hash table

        for(int k=0;k<n;k++){
            if(arr[k]!=EMT){
                printf("%d ",arr[k]);
            }else{
                printf("position %d is empty\n",k);
            }
        }




    return 0;
}