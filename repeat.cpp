#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        vec.push_back(p);
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[vec[i]]++;
    }
    for(auto it:mpp){
        if(it.second>1){
            cout<<it.first;
        }
    }
}
