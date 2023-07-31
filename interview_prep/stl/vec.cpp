#include<iostream>
#include<vector>
using namespace std;


 void displayVec(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]; 
    }

 }
int main(){
   vector <int> v;  //dynamic array
    //input
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    //output
    for(int x:v) cout<<x; //auto keyword can also be used
}