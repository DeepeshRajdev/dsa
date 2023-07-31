#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int n){
    if(n==1) return;
    int min=0;
    for(int j=0;j<n;j++){
        if(arr[j]<arr[min]) min=j;
    }
    swap(arr[0],arr[min]);
    selection(arr+1,n-1);
}


int main(){
    int arr[]={4,5,1,2,3,7,5};
    int n=sizeof(arr)/sizeof(int);
    selection(arr,n);
    for(auto x:arr) cout<<x<<" ";
}