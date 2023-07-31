#include<bits/stdc++.h>
using namespace std;

int factors(int n){
    int c=0;
    for(int i=1;i*i<=n;i++){
        
        if(n%i==0){
            c++;
        if(i*i!=n)c++;

        }

    }
    return c;
}


int SOE(int n){
vector<int> v(n+1,1);
v[1]=0;
for(int i=2;i<=n;i++){
    if(!v[i]) continue;
    for(int j=i*2;j<=n;j+=i){
        v[j]=0;
    }
}
}


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<factors(i)<<endl;
    }
}
