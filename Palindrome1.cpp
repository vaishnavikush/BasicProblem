#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int last;
long long rev=0;
cout<<"Enter No.";
cin>>n;
int pal=n;
while(n>0){
   last=n%10;
   n=n/10;
   rev=(rev*10)+last;
}
if(rev>INT_MAX || rev<INT_MIN){
    return 0;
}
if(rev==pal){
    cout<<"The no. is Palindrome "<<(int)rev;
}else{
cout<<"The no. is not Palindrome";
}
}
