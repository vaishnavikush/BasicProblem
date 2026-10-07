#include<iostream>
using namespace std;
int main(){
int last;
cout<<"Enter The Value";
cin>>last;
int rest=0;
int arr[last]={0,1};
int len=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<last;i++){
   rest=arr[i]+arr[i+1];
   arr[i+2]=rest;
}
for(int i=0;i<last;i++){
    cout<<" "<<arr[i];
}




}
