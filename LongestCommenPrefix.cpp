#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string>strs;
    strs={"flower","flow","flight"};
 int m=0;
        string str="";
        for(int i=0;i<strs.size();i++){
            for(int j=i+1;j<strs.size();j++){
                for(int k=j+1;k<strs.size();k++){
                    if(strs[i]==strs[j] ){
                        if(strs[j]==strs[k]){
                            str+=strs[i];
                             cout<<str;
                             m++;
                        }
                    }
                }
            }

        }



}
