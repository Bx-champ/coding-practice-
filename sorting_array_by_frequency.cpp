#include<bits/stdc++.h>
using namespace std;
bool sortele(pair<int, int> a, pair<int, int> b)
{
  if (a.second == b.second)
    return a.first < b.first;
  return a.second > b.second;
}
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        vec.push_back(p);
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[vec[i]]++;
    }
    vector<pair<int,int>>vec1;
    for(auto it= mpp.begin();it!=mpp.end();it++){
        vec1.push_back({it->first,it->second});
    }
    sort(vec1.begin(),vec1.end(),sortele);
    for (int i = 0; i < vec1.size(); i++)
  {
    while (vec1[i].second > 0)
    {
      cout << vec1[i].first << " ";
      vec1[i].second--;
    }
  }
  cout << endl;
    
    
}
