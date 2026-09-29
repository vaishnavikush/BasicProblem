#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter value To Reverse";
cin>>n;
int org=n;
int last;
int rev=0;
while(n!=0){
   last=n%10;
   n=n/10;
   rev=(rev*10)+last;
}
if(org==rev){
    cout<<"Palindrom";
}
else{
    cout<<"Not Palindrom";
}

}
