#include<iostream>
using namespace std;

int foccur( int arr[],int n,int target){
    if(n==0){
        return -1;
    }
    
    if(arr[0]==target){
        return 0;
    }
   int subindex=foccur(arr+1,n-1,target);
   if(subindex!=-1){
    return subindex+1;
   }
     
}


int main(){
    int arr[]={1,2,3,3,4,5};
    int n=sizeof(arr)/size0f(arr[0]);
    int key=3;
    cout<<foccur(arr,n,key);
}