#include<bits/stdc++.h>
using namespace std;

class Matrix{
    public:
    int n;
    int a[10];
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
};
 void Matrix::set(int i,int j,int x){
    if(i==j) a[i]=x;
}
int Matrix::get(int i,int j){
    if(i==j) return a[i];
    else return 0;
    
}
void Matrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<get(i,j)<<" ";
        }cout<<endl;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    Matrix m;
    m.n=5;
    m.set(1,1,4);
    m.set(2,2,4);
    m.set(3,3,4);
    m.set(4,4,4);
    m.set(0,0,4);
    m.display();
}