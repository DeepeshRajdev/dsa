#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count=0;
    for(int i=0;i<n;i++){
        vector<int> v(3);
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            v.push_back(x);
            }
            int sum=accumulate(v.begin(),v.end(),0);
            if(sum>=2) count++;
    }
        cout<<count<<endl;
}