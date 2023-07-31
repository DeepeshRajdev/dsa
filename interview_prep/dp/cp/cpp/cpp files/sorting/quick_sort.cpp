#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h){
        int pivot=arr[l];
         int i=l;
        int j=h;
        do{
        do{i++;} while(arr[i]<=pivot);
        do{j--;} while(arr[j]>pivot);
        if(i<j) swap(arr[i],arr[j]);
        }while(i<j);
        swap(arr[l],arr[j]);
        return j;
}
    void quick(int arr[],int l,int h){
        if(l<h){
        int x=partition(arr,l,h);
        quick(arr,l,x);
        quick(arr,x+1,h);
        }
    }


int main(){
    int arr[]={4,5,1,2,3,7,5,INT32_MAX};
    int n=sizeof(arr)/sizeof(int);
    quick(arr,0,n-1);
    for(auto x:arr) cout<<x<<" ";
}