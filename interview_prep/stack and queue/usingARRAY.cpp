#include<iostream>
using namespace std;

#define size 10

class stack{
    public:
    int top;
    int arr[size];
    stack(){
        top=-1;
    }
    void push(int x);
    int pop();
};

void stack::push(int x){
    if(top==size-1) cout<<"stack overflow"<<endl;
    else{
        arr[++top]=x;
    }
}
int stack::pop(){
    int x=-1;
    if(top==-1) cout<<"underflow";
    else {
        x=arr[top--];
        return x;
    }
}

int main(){
    stack s;
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        s.push(arr[i]);
    }
        for(int i=s.top;i>=0;i--){
            cout<<s.arr[i]<<" ";
        }
}