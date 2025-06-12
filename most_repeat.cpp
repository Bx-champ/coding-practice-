#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string w="";
    string result;
    int max=INT_MIN;
    cout<<"enter the string :";
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            w=w+s[i];
        }else{
            // cout<<"word is :"<<w;
            map<char,int> mpp;
            for(int j=0;j<w.size();j++){
                mpp[s[j]]++;
            }
            
            for(auto it:mpp){
              if(it.second>max){
                  max=it.second;
                  result=w;
              }  
            }
            w="";
        }
    }
    if (max==1){
        cout<<"non repeating";
        return 0;
    }
    cout<<max;
    cout<<result;
}
