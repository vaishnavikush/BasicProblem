#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter Character To Search";
cin>>ch;
string str="banana";
int count=0;
for(int i=0;i<str.length();i++){
    if(str[i]==ch){
        count=count+1;
    }
}
cout<<count;

}
