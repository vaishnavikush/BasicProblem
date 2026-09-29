#include<iostream>
using namespace std;
int main(){
string str;
cout<<"Enter String";
cin>>str;
string copy1;
for(int i=1;i<=str.length()-2;i++){
copy1=copy1+str[i];
}
cout<<copy1;

}
