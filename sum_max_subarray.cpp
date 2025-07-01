#include<bits/stdc++.h>
using namespace std;
int longest(int arr[],int sum,int n){
    int m=0;
    int length=0;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        m=m+arr[i];
        if(m==sum){
            length=max(length,i+1);
        }
        int rem=m-sum;
        if(mpp.find(rem)!=mpp.end()){
            length=max(length,i-mpp[rem]);
        }
        if(mpp.find(m)==mpp.end()){
            mpp[m]=i;
        }
        
        
    }
    return length;
}
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the sum you wanted :";
    int sum;
    cin>>sum;
    int res=longest(arr,sum,n);
    cout<<res;
}
