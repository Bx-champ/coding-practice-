#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    int k;
    cout<<"enter the string :";
    getline(cin,s1);
    string s2;
    cout<<"enter second string :";
    getline(cin,s2);
      int j=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[j]){
            if(j==0){
                k=i;
            }
            j++;
            if(j==s2.size()){
                cout<<"subset found at position:"<<k;
                return 0;
            }
        }else{
            if(j>0){
            j=0;
            i=k+1;
            }
        }
    }
    cout<<"no subsets";
}
