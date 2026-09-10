#include<stdio.h>
void main(){
int arr[]={2,4,1,2,1,4};
int n=6;
for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("/%d",arr[i]);
            }
        }

}
}

