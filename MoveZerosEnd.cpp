#include<iostream>
using namespace std;
int main(){
int arr1[]={0,11,5,0,4,0};
int leg=sizeof(arr1)/sizeof(arr1[0]);
int arr2[6];
int j=0;
for(int i=0;i<leg;i++){
    if(arr1[i]!=0){
        arr2[j]=arr1[i];
        j++;
    }
}
for(int k=0;k<leg;k++){
     cout<<arr2[k];
}

}
