#include<iostream>
using namespace std;
int main(){
string str;
cout<<"Enter String";
getline(cin,str);
string str1=" ";
for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            str1=str1+str[i];
        }

}
 cout<<str1;

}
