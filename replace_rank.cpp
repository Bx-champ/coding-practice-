#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector<int> vec;
    vector<int> vec1;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        vec.push_back(p);
    }
    vec1=vec;
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(vec[i]);
    }
    sort(vec.begin(),vec.end());
    map<int,int>mpp;
    int j=1;
    for(auto it:st){
        mpp[it]=(j);
        j++;
    }
    for(int i=0;i<vec1.size();i++){
        cout<<mpp[vec1[i]];
    }
    
}
