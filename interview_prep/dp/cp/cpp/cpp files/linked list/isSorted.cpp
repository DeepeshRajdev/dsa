#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};
void display(node *temp){
    if(temp==NULL) return;                          //display list
    cout<<temp->data<<" ";
    display(temp->next);
}
    node*first=NULL;
    node*last=NULL;
void insert(int x){
    node*temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(first==NULL){
        first=temp;
        last=temp;
    }
    else{
        last->next=temp;
        last=temp;
    }
}

bool isSorted(node*p,node* q){
    if(q==NULL) return true;
    if(p->data > q->data) return false;
    isSorted(q,q->next);
    }

int main(){
    
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        insert(arr[i]);
    }
    node*temp=first;
    display(first);
    node*p=first;
    node*q=first->next;
    cout<<endl;
    cout<<isSorted(p,q);
}