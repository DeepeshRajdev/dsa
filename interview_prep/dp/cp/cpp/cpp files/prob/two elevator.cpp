#include<bits/stdc++.h>
using namespace std;
int main(){
   
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(n==1){
            cout<<"0"<<endl;
            return 0;
        }
        
       if(c<a && c<b) cout<< min(a,b)+(c*(n-2))<<endl;
       else cout<<min(a,b)*(n-1)<<endl;
        
    
    return 0;
}
