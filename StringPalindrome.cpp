#include<iostream>
using namespace std;
int main(){
string str;
cout<<"Enter String To Reverse";
cin>>str;
string org=str;
string rev="";
for(int i=str.length()-1;i>=0;i--){
    rev=rev+str[i];
}
    if(rev==org){
        cout<<"Palinfrom";
    }
    else{
         cout<<"Not Palinfrom";
    }
}
