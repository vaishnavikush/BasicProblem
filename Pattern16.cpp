#include<iostream>
using namespace std;
void Pattern(int n){
for(int i=0;i<n;i++){
    for(char ch='E'-i;ch<='E';ch++){
    cout<<ch;
    }
    cout<<endl;
}
}
int main(){
int t;
cout<<"Entre No. Of Test Cases";
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    Pattern(n);
}
return 0;
}
