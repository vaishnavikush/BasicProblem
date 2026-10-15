#include<iostream>
using namespace std;
//By using two pointers
void Reverse(int l,int r,int arr[]){
if(l>= r){
    return;
}
swap(arr[l],arr[r]);
Reverse(l+1,r-1,arr);
}
int main(){
int n;
cout<<"Enter array size";
cin>>n;
cout<<"Enter array values";
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
Reverse(0,n-1,arr);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}
