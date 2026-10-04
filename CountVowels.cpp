#include<iostream>
using namespace std;
int main(){
string str;
cout<<"Enter String";
cin>>str;
int count=0;
for(int i=0;i<str.length();i++){
    if(str[i]=='a'){
        count=count+1;
    }
     if(str[i]=='e'){
         count=count+1;
    }
     if(str[i]=='i'){
        count=count+1;
    }
     if(str[i]=='o'){
        count++;
    }
     if(str[i]=='u'){
         count=count+1;
    }
}
cout<<count;

}
