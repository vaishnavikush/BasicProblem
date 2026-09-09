#include<stdio.h>
int main(){
    int arr[5]={2,0,8,0,5};
int small=arr[0];
int secsmall=arr[0];
for (int i=0;i<5;i++){
    if(small>arr[i]){
        small=arr[i];
    }
}
for(int i=0;i<5;i++){
    if(secsmall>arr[i] && arr[i]!=small){
     secsmall=arr[i];
    }
}
printf("Smalest value %d",small);
printf("Second smalest value %d",secsmall);
}
