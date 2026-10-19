#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
int arr[n];
int max=0;
cout<<"Enter elements of array";
for(int i=0;i<n;i++){
   cin>>arr[i];
   if(arr[0]<arr[i]){
    max=arr[i];
   }
}
cout<<"max "<<max;
cout<<endl;

int hash[max]={0};
for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
}
int q;
cout<<"Enter size of quirey";
cin>>q;
for(int i=0;i<q;i++){
    int number;
    cin>>number;
    cout<<hash[number]<<endl;
}

}
