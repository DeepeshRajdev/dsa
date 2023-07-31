#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
       int  j=i-1;
        int x=arr[i];
        while(j>(-1) && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }

}

int main(){
    int arr[]={4,5,1,2,3,7,5};
    int n=sizeof(arr)/sizeof(int);
    insertion(arr,n);
    for(auto x:arr) cout<<x<<" ";
}