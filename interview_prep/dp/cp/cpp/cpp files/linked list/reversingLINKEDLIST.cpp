#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    
    node(){
        data=0;
        next=NULL;
    }
};

void display(node *temp){
    if(temp==NULL) return;                          //display list
    cout<<temp->data<<" ";
    display(temp->next);
}

void insert(int x){
    node*temp=new node();
    temp->data=x;
    if(first==NULL){
        first=temp;
        last=temp;
    }
    else{
        last->next=temp;
        last=temp;
    }
}
int main(){
        int arr[]={1,2,3,4,5,6,7};
        int n=sizeof(arr)/sizeof(int);
        for(int i=0;i<n;i++){
        insert(arr[i]);
            }
        node*temp=first;
        display(temp);

         
}