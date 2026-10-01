#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string str1;
string str2;
cout<<"Enter First String To Compare";
cin>>str1;
cout<<"Enter Second String To Compare";
cin>>str2;
sort(str1.begin(),str1.end());
sort(str2.begin(),str2.end());
if(str1.length()==str2.length()){
    if(str1==str2){
        cout<<"Anagram";
    }
    else{
         cout<<"Not Anagram";
    }
}
else{
      cout<<"Not Anagram";
}


}
