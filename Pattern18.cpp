#include<iostream>
using namespace std;
void Pattern(int n){
for(int i=0;i<n;i++){
      if(i==n-1){
        break;
      }
      else{

    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    for(int j=0;j<2*(n-i-1);j++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
}
}
void Pattern2(int n){
for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){
        cout<<"*";
    }
    for(int j=0;j<2*i;j++){
        cout<<" ";
    }
    for(int j=n;j>i;j--){
        cout<<"*";
    }
    cout<<endl;
}
}
int main(){
int t;
cout<<"Enter No. Of Test Cases";
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    Pattern(n);
    Pattern2(n);
}
return 0;
}
