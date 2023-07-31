#include<bits/stdc++.h>
using namespace std;
 int main(){
   vector<int> v={1,2,3,4,5,6,7,1,2,3,4};
    map <int ,int> m;
   for(int i=0;i<v.size();i++) m[v[i]]++;

    for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
    auto it=m.find(7);
    cout<<it->first<<" "<<it->second<<endl;

 }

