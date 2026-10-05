#include<iostream>
using namespace std;
int main(){
string str;
cout<<"Enter String";
cin>>str;
char ch;
int m=0;
for(int i=1;i<str.length();i++){
       ch=str[m];
if(ch==str[i]){
    cout<<ch;
    break;
}else{
ch=str[i];
}
}
}

