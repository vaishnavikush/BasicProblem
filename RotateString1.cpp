#include<iostream>
using namespace std;
int main(){
string str1;
string str2;
string str3="";
int j=0;
cout<<"Enter String To Rotate";
cin>>str1;
for(int i=0;i<=str1.length()-1;i++){
    if(i==0){
        str2=str1[i];
    }
    else{
        str3=str3+str1[i];
    }
}
  cout<<str3+str2;

}
