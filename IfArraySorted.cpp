#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={3,4,6,7,9};
int len=sizeof(arr)/sizeof(arr[0]);
int flag=0;
for(int i=0;i<len-1;i++){
    int j=arr[i];
  if(j<=arr[i+1]){
flag=1;
  }else{
      flag=0;
  break;
  }

}
if(flag==1){
    cout<<"Array is Sorted";
}
else{
     cout<<"Array is not Sorted";
}

}
