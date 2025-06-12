#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string w="";
    string result;
    int max=INT_MIN;
    int count;
    cout<<"enter the string :";
    getline(cin,s);
    s=s+" ";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            w=w+s[i];
        }else{
            // cout<<"word is :"<<w;
            map<char,int> mpp;
            for(int j=0;j<w.size();j++){
                mpp[w[j]]++;
            }
            count=0;
            for(auto it:mpp){
              if(it.second>1){
                  count++;
                  cout<<"count:"<<count<<endl;
                  
              }  
            }
            if(count>max){
                max=count;
                result=w;
            }
            w="";
        }
    }
    // if (max==0){
    //     cout<<"non repeating";
    //     return 0;
    // }
    cout<<max;
    cout<<result;
}
