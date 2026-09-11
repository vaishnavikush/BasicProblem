#include<iostream>
using namespace std;
int add(int nm1,int nm2){
    int nm3=nm1+nm2;
//cout<<"The Sum Of Two No :"<<nm3;
return nm3;
}
int main(){
int nm1,nm2;
cout<<"Enter First No";;
cin>>nm1;
cout<<"Second First No";
cin>>nm2;
int result =add(nm1,nm2);
cout<<"The Sum Of Two No :"<<result;
return 0;
}
