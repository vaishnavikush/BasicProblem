#include<stdio.h>
int main(){
int arr[5]={1,2,0,9,8};
int flag;
for(int i=1;i<5;i++){
    if(arr[i]>=arr[i-1]){
 flag=0;
    }else{
     flag=1;
    }
}
 if(flag==1){
    printf("Array is not sorted");
 }
 else{
     printf("Array is sorted");
 }
}
