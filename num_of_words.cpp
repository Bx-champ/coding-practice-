#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    int sp=0;
    cout<<"enter the string :";
    getline(cin,str1);
    int count=0;
    int k=str1.length()-1;
    while(str1[k]==' '){
        k--;
    }
    string str2=str1.substr(0,k+1);
    int j=0;
    while (str1[j]==' '){
        j++;
    }
    for(int i=j;i<str2.length();i++){
        if(str2[i]==' ' && sp==0){
            count++;
            sp=1;
        }else if(str2[i]!=' '){
            sp=0;
        }
    }
    cout<<count+1;
}
