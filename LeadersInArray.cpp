#include<iostream>
using namespace std;
int main(){
int arr[]={16,50,60,30,1,2};
int len=sizeof(arr)/sizeof(arr[0]);
int k=0;
int arr2[k];
for(int i=0;i<len;i++){
        int v=i+1;
        int flag=1;
    for(int j=v;j<len;j++){
            if(arr[i]<=arr[j]){
                    flag=0;
                break;
            }
    }
    if(flag==1){
        arr2[k]=arr[i];
        k=k+1;
    }

}

for(int p=0;p<k;p++){
    cout<<arr2[p];
    cout<<endl;
}

}
