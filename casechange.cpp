#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string :";
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]=towlower(s[i]);
        }else if(s[i]>=97 && s[i]<=122){
            s[i]=towupper(s[i]);
        }
    }
    cout<<s;
}
