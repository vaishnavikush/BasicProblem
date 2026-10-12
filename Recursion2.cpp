#include<iostream>
using namespace std;
   int count=0;
void nameFun(int n){
    if(count==n){
        return;
    }
  cout<<"Vaishnavi";
  cout<<endl;
count++;
nameFun(n);
}
int main(){
    int n;
cout<<"Enter the value up to which you want to print the name";
cin>>n;
nameFun(n);

}
