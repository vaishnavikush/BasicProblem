#include<iostream>
#include<map>
using namespace std;
int main(){
string s;
cout<<"Enter String";
cin>>s;
map<char,int>mp;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
int q;
cout<<"Enter size of query";
cin>>q;
cout<<"Enter quries";
for(int i=0;i<q;i++){
    char ch;
    cin>>ch;
    cout<<mp[ch]<<endl;
}

}
