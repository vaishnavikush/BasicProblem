#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
int arr[n];
cout<<"Enter values of array";
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
cout<<"Enter no. of quries";
for(int i=0;i<q;i++){
    int no;
    cin>>no;
    if((mp[no]-1)==mp[no]){
        cout<<"Same";
    }

}

}
