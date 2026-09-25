#include<iostream>
using namespace std;
void Pattern(int n){
for(int i=0;i<n;i++){
    if(i==0 || i==n-1){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    else{
        for(int j=0;j<1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-2;j++){
            cout<<" ";
        }
        for(int j=0;j<1;j++){
            cout<<"*";
        }
        cout<<endl;

    }

}

}
int main(){
    int t;
    cout<<"Enter No. Of Test Cases";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        Pattern(n);
    }
return 0;
}
