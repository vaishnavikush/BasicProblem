#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
int arr[n];
cout<<"Enter vlaues of array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
map<int,int>mp;
for(int i=0;i<n;i++){
    mp[arr[i]]++;
}
int q;
cout<<"Enter size of query";
cin>>q;
cout<<"Enter no. of queries";
int max=0;
for(int i=0;i<q;i++){
    int no;
    cin>>no;
    cout<<mp[no]<<endl;
    if(max<mp[no]){
        max=no;
    }
}
 cout<<"Max Value"<<max;

}
