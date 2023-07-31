#include<iostream>
using namespace std;

struct array {
    int A[20];
    int length;
    int size;
};
void display (struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
 void insert(struct array *arr,int index,int x){
    for(int i=arr->length;i>index;i--){
        arr->A[i]=arr->A[i-1];
    }
    arr->A[index]=x;
 }


int main(){
    struct array arr={{1,2,3,4,5},5,7};
    display(arr);
    cout<<endl;
    insert(&arr,0,5);
    display(arr);
}