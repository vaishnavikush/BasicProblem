#include<iostream>
using namespace std;
int main(){
int arr1[]={1,2,40,3,4,6,50};
int len=sizeof(arr1)/sizeof(arr1[0]);
int arr2=arr1[0];
for(int i=1;i<len;i++){
if(arr2>=arr1[i]){
    arr2=arr1[i];
}
}
int k=0;
int arr3[k];

for(int i=0;i<len;i++){
    if(arr2==arr1[i]){
          arr3[k]=arr2;
          k++;
        arr2=arr2+1;;
        i=0;
    }
}
int count=0;
for(int i=0;i<k;i++){
    cout<<arr3[i];
    count++;
}
cout<<endl<<"The length "<<count;
}
