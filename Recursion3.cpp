#include<iostream>
using namespace std;
void numberFun(int i,int n){
    if(i>n){
        return;
    }
    cout<<i;
    cout<<endl;
    numberFun( i+1, n);

}
int main(){
int n;
cout<<"Enter the Value up to which you want to print the numbers";
cin>>n;
numberFun(1,n);

}
