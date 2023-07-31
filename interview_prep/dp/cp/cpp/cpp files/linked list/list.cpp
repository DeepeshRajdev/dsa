#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
};
class list{
    public:
    node* first;

   
    list(int arr[],int n){
    first=new node();
    first->data=arr[0];    
    node* last=NULL;
    
    
    for(int i=1;i<n;i++){
    node* temp=new node();
    temp->data=arr[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
    }
    
    
}

    void display();
    void insert(int index,int x);
    void delete(int index);
    int length();
};
    void list::display(){
        node* temp=first;
        if(temp==NULL) return;
        cout<<temp->data<<" ";
        temp=temp->next;
        display();
    }
    void list::insert(int index,int x){
    node*temp=new node();
    temp->data=x;
    if(index==0){
        temp->next=first;
        first=temp;
    }
    else if(index>0){
        node* t=first;
        for(int i=0;i<index-1;i++){
            t=t->next;
        }
        temp->next=t->next;
        t->next=temp;
    }
}
    int list::length(){
        node*temp=first;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    void delete(int index){
        if(index==0){
            node*temp=first;
            first=first->next;
            delete temp;
        }
        else{
            node *q=NULL:
            node*p=first;
            for(int i=0;i<index-1;i++){
                q=p;
                p=p->next;
            }
            q->next=p->next;
            delete p;
        }
    }

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    list l(arr,n);
    l.display();

    return 0;
}