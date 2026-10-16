#include<iostream>
using namespace std;
int fiboFun(int n){
if(n<=1){
    return n;
}
int res=0;
int last=fiboFun(n-1);
int slast=fiboFun (n-2);
res=last+slast;
return res;
}
int main(){
int n;
cout<<"Enter No.";
cin>>n;
int res=fiboFun(n);
cout<<res;
return 0;
}
