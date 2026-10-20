#include<iostream>
#include<map>
using namespace std;
int main(){
int n;
cout<<"Enter size of array";
cin>>n;
int arr[n];
cout<<"Enter "<<n<<" array values";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
map<int,int>mp;
for(int i=0;i<n;i++){
    mp[arr[i]]++;
}
int q;
cout<<"Enter size of qurey";
cin>>q;
cout<<"Enter quries";
for(int i=0;i<q;i++){
    int num;
    cin>>num;
    cout<<mp[num]<<endl;
}


}
