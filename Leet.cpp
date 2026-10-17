#include<iostream>
using namespace std;
int main(){
string s;
cout<<"Enter string ";
cin>>s;
string str;
int m=0;
for(int i=1;i<s.size();i++){
       if(s[i]==s[i-1]){
        str[m]=s[i-1];
        m++;
       }
       str[m]=s[i];
       m++;
}
for(int i=0;i<str.size();i++){
       cout<<str[i];
}

}
