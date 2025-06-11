#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=1;
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        vec.push_back(p);
    }
    sort(vec.begin(),vec.end());
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(vec[i]<0){
            neg.push_back(vec[i]);
        }else{
            break;
        }
    }
    
    for(int i=(n-1);i>=0;i++){
        if(vec[i]>0){
            m=m*vec[i];
        }else{
            break;
        }
    }
    int z;
    int m1=1;
    if(neg.size()%2==0){
        z=neg.size();
    }else{
        z=neg.size()-1;
    }
    for(int i=0;i<z;i++){
        m1=m1*neg[i];
    }
    if(m==m1){
        cout<<m;
    }
    if(m>m1){
        cout<<m;
    }else{
        cout<<m1;
    }
}
