#include<iostream>
using namespace std;
int main(){
int arr[]={2,5,6,0,10};
int s=arr[0];
int length=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<length;i++){
        if(s>arr[i]){
            s=arr[i];
        }
}
cout<<s;

}


