#include<iostream>
using namespace std;
int main(){
int arr[]={4,6,3,7,3,2};
int lng=sizeof(arr)/sizeof(arr[0]);
int n;
int flag=0;
cout<<"Enter no. for search";
cin>>n;
for(int i=0;i<lng;i++){
    if(arr[i]==n){
        flag=1;
        break;
    }
}
if(flag==1){
    cout<<"Value is present";
}else {
cout<<"Value is not presnet";
}

}
