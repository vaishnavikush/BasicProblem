#include<iostream>
using namespace std;
//By using one pointer
void Resverse(int i,int arr[],int n){
if(i>=n/2){
    return;
}
swap(arr[i],arr[n-i-1]);
Resverse(i+1,arr,n);
}
int main(){
int n;
cout<<"Size of array";
cin>>n;
cout<<"Now enter arrays values";
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
Resverse(0,arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}
