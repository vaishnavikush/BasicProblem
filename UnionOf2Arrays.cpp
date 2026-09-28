#include<iostream>
using namespace std;
int main(){
int arr1[]={1,2,3,4,8};
int arr2[]={1,2,3,6,7};
int arr3[7];
int lng=sizeof(arr1)/sizeof(arr1[0]);
int k=lng+1;
int y=5;
int lng2=sizeof(arr3)/sizeof(arr3[0]);
for(int i=0;i<lng;i++){
    arr3[i]=arr1[i];
}
for(int j=0;j<lng2;j++){
    if(arr3[j]!=arr2[j]){
        arr3[y]=arr2[j];
        y++;
    }

}
int arr4[10];
for(int m=0;m<lng2;m++){
        int n=arr3[m];
  if(n>arr3[m+1]){
    arr3[m+1]=n;
    n=arr3[m+1];
  }

  cout<<arr3[m];
}
}
