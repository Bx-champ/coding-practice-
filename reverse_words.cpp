 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     string s;
     string s1="";
     string w="";
     cout<<"enter the string:";
     getline(cin,s);
     s=s+" ";
     for(int i=0;i<s.size();i++){
         char g=s[i];
         if(g!=' '){
             w=w+g;
         }else{
             s1=w+" "+s1;
             w="";
         }
     }
     cout<<s1;
 }
