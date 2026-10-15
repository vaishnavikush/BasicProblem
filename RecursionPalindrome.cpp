#include<iostream>
using namespace std;
bool Palindrome(int i,string s){
int n=s.size();
if(i>=n/2){
    return true;
}
if(s[i]!=s[n-i-1]){
    return false;
}
 return Palindrome(i+1,s);
}
int main(){
string s;
cout<<"Enter String";
cin>>s;
bool res=Palindrome(0,s);
if(res==true){
    cout<<"Palindrome";
}else{
cout<<"Not Palindrome";
}
}
