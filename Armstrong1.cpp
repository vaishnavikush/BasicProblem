#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"Enter no. to check";
cin>>n;
int last;
int sum=0;
int power=0;
int m=0;
int again=n;
int last2;
int check=n;
while(n!=0){

m=m+1;
   n=n/10;
}
cout<<"\nThe count is "<<m;

while(again!=0){
    last2=again%10;
    power=pow(last2,m);
    sum=power+sum;
    again=again/10;
}
cout<<"\nThe Sum is "<<sum;
if(sum==check){
    cout<<"\n"<<"No is Armstrong ";
}
else{
        cout<<"\n"<<"No is not Armstrong";
}
}
