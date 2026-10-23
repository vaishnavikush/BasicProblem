#include<iostream>
using namespace std;
int main(){
string s;
cout<<"Enter string";
cin>>s;
int hash[25]={0};
for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++;
}
int q;
cout<<"Enter size of quirey";
cin>>q;
cout<<"Enter No. of quires till "<<q;
for(int i=0;i<q;i++){
    char ch;
    cin>>ch;
    cout<<hash[ch-'a'];
    cout<<endl;

}
}
