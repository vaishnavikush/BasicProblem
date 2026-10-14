#include<iostream>
using namespace std;
int i=1;
int result=0;
int SumFum(int n){
if(i>n){
    return 0;
}
result=result+i;
i++;
SumFum(n);
return result;
}
int main(){
int n;
cout<<"Enter the value";
cin>>n;
SumFum(n);
int res=result;
cout<<res;
}
