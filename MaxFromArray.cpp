#include<iostream>
using namespace std;
int main(){
int arr[]={2,5,6,4,10};
int m=0;
int length=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<length;i++){
        if(m<arr[i]){
            m=arr[i];
        }
}
cout<<m;

}


