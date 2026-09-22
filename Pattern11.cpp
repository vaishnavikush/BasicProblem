#include<iostream>
using namespace std;
void Pattern(int n){
for(int i=0;i<=n;i++){
        char k='A';
    for(int j=n;j>=i;j--){
        cout<< k<<" " ;
k++;
    }
    cout<<endl;
}
}
int main(){
int t;
cout<<"Enter No. Of Test cases";
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    Pattern(n);
}
return 0;
}
