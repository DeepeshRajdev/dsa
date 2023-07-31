#include<iostream>
using namespace std;

int search(int arr[],int start,int end,int key){
    if(end<start){
        return -1;
    }
    int mid=(start+end)/2;
    
    if(arr[mid]>key){
        return search(arr,start,mid-1,key);
    }
    else if(arr[mid]<key){
        return search(arr,mid+1,end,key);
    }
    else return mid;
}


int main(){
    int arr[]={1,3,5,7,9,11,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=11;
}