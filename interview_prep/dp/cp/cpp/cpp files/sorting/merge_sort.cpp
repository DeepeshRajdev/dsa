#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int h){
    int i=l;
    int k=l;
    int j=mid+1;
    int B[h+1];

    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
                B[k++]=arr[i++];
        }
        else {
            B[k++]=arr[j++];
        }
    }
    while(i<=mid) B[k++]=arr[i++];
     while(j<h) B[k++]=arr[j++];
     for(int i=l;i<=h;i++){
        arr[i]=B[i];
     }
}

void MergeSort(int arr[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}



int main(){
    int arr[]={6,1,4,2,9,7,5};
    int n=sizeof(arr)/sizeof(int);
    MergeSort(arr,0,n-1);
    for(auto x: arr){
        cout<<x<<" ";
    }
}