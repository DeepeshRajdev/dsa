#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n){
    if(n==1) return;
    for(int j=0;j<n;j++){
        if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
    }
    bubble(arr,n-1);
}


int main(){
    int arr[]={4,5,1,2,3,7,5};
    int n=sizeof(arr)/sizeof(int);
    bubble(arr,n);
    for(auto x:arr) cout<<x<<" ";
}