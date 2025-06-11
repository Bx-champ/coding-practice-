#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int l=0;
    int left;
    cout<<"enter the size :";
    cin>>n;
    int sum=0;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        sum=sum+p;
        vec.push_back(p);
    }
    int last=n-1;
    int i;
    for(i=n-1;i>=0;i--){
        sum=sum-vec[i];
        if(i!=(n-1)){
            l=l+vec[i+1];
        }
        if(l==sum){
            left=i;
        }
    }
    cout<<"left most is "<<left;
    
}
