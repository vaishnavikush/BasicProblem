#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter No.";
cin>>num;
int last;
int count=0;
while(num>0){
   last=num%10;
   cout<<"\n"<<last;
   num=num/10;
    count=count+1;
}
cout<<"\nThe No.Of Digits "<<count;
}
