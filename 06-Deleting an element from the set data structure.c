#include<stdio.h>
#define EMT -1




//LOGIC FOR INSERT FUNCTION
void insert(int hash[],int size,int x,int *crntsize){

    if(*crntsize>=size){
        printf("the hash table is full");
        return;
    }

    int indx=x%size;
    

    while(hash[indx]!=EMT&&hash[indx]!=x){
        indx=(indx+1)%size;

    }


    if(hash[indx]==EMT){
        hash[indx]=x;
        (*crntsize)++;
    }


}



//LOGIC FOR DELETING A NUMBER FORM THE SET


void delet(int hash_table[],int hsh_size,int elmnt){
    if(elmnt<0){
        printf("wrong input");
        return 
    }
    int pos=elmnt%hsh_size;
    while(hash_table[pos]!=EMT){
        if(hash_table[pos]==elmnt){
            hash_table[pos]=EMT;
            printf("the element is deleted");
            return;
        }
        pos=(pos+1)%hsh_size;
    }
    
    printf("the element is not found");
}





int main(){

int n,count=0;
scanf("%d",&n);


//LOGIC FOR SPECIAL CASE
if(n<1){
    printf("wrong input\n");
    return -1;
}


int arr[n];

//LOGIC FOR FILLING THE ARRAY WITH -1
for(int i=0;i<n;i++){
    arr[i]=EMT;
}



//LOGIC FOR TAKING INPUT FOR SET DS
for(int j=0;j<n;j++){
    int y;
    scanf("%d",&y);


    if(y<0){
        printf("wrong input\n");
        return -1;
    }


    insert(arr,n,y,&count);

}



 //calling the delet function 
 int input;
 scanf("%d",&input);
 delet(arr,n,input);






 //LOGIC FOR PRINTING THE 
for(int l=0;l<n;l++){
    if(arr[l]!=EMT){
        printf("%d ",arr[l]);
    }
}

printf("\n");




    return 0;
}
