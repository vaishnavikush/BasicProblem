#include<iostream>
using namespace std;
void countFun(int n){
for(int i=1;i<=n;i++){
       if(i>999){
        cout<<i/1000<<",";
        if(i%1000<10){
            cout<<"00"<<i%1000;
        }
       else if(i%1000<100){
            cout<<"0"<<i%1000;
        }else{
                cout<<i%1000;
        }
       }
       else{
         cout<<i;
       }
    cout<<endl;
}
}
int main(){
int n;
cout<<"Enter No";
cin>>n;
countFun(n);
}
