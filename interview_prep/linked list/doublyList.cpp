#include<iostream>
using namespace std;

class node{
    public:
    node* prv;
    int data;
    node* next;
}*first=NULL;
 
void create(int arr[],int n){
    first=new node();
    first->prv=NULL;
    first->next=NULL;
    node*last=first;
    first->data=arr[0];
    for(int i=1;i<n;i++){
        node* temp=new node();
        temp->data=arr[i];
        temp->prv=last;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void display(node* temp){
     if(!temp) return;
    cout<<temp->data<<" ";
    display(temp->next);
}
int length(node* temp){
    int count=0;
    while(temp){
        
        count++;
        temp=temp->next;
    }
    return count;
}
void insert(int index,int x){
    node* temp=new node();
    temp->data=x;
    if(!index){
         temp->next=first;
        first->prv=temp;
        first=temp;
        temp->prv=NULL;
        
    }
    else{
        node *p=first;
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        temp->next=p->next;
        temp->prv=p;
       if(p->next) p->next->prv=temp;
        p->next=temp;

    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    create(arr,n);
    node* temp=first;
    display(temp);
    cout<<endl;
    cout<<length(first)<<endl;
    insert(5,11);
    cout<<length(first)<<endl;
    display(first);

}