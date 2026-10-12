#include<iostream>
using namespace std;
int count=0;
void fun1(){
    if(count==3){
        return;
    }
cout<<count;
cout<<endl;
count++;
fun1();
}
int main(){
fun1();
}
