#include<iostream>
using namespace std;
void ReverseFun(int n){
if(n<1){
    return;
}
cout<<n;
cout<<endl;
n=n-1;
ReverseFun(n);
}
int main(){
int n;
cout<<"Enter the value from which you want to print the values in reverse order";
cin>>n;
ReverseFun(n);

}
