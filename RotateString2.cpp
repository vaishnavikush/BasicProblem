#include<iostream>
using namespace std;
int main(){
int arr[]={1,0,2,0,0};
int len=sizeof(arr)/sizeof(arr[0]);
int count1=0;
int count2=0;
int count3=0;
int org[len];
for(int i=0;i<len;i++){
    if(arr[i]==0){
    count1++;
    }
  if(arr[i]==1){
    count2++;
    }
    if(arr[i]==2){
    count3++;
    }
}
cout<<"Count1"<<count1;
cout<<"Count2"<<count2;
cout<<"Count3"<<count3;
cout<<endl;
int k=0;
for(int j=0;j<count1;j++){
org[k]=0;
k=k+1;
}
for(int j1=0;j1<count2;j1++){
org[k]=1;
k=k+1;
}
for(int j2=0;j2<count3;j2++){
org[k]=2;
k=k+1;
}
for(int i=0;i<len;i++){
    cout<<org[i];
}
}
