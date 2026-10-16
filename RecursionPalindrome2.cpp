#include<iostream>
using namespace std;
string str="";
string Palindrome(int i,string s){

    if(i>s.size()-1){
        return "true";
    }
Palindrome(i+1,s);
str+=s[i];
return str;
}
int main(){
string s;
cout<<"Enter String";
cin>>s;
string org=s;
string res=Palindrome(0,s);
if(str==org){
    cout<<"Palindrome";
}else{
cout<<"Not Palindrome";
}
}
