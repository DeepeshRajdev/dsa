#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
void display (node* temp){
    if(temp==NULL) return;
    cout<<temp->data;
    display(temp->next);
}

int main(){
    node *first=new node();
    node *second=new node();
    node*third=new node();
    
    first->data=5;
    first->next=second;
    second->data=7;
    second->next=third;
    third->data=8;
    third->next=NULL;
    int key=7;

    node*temp=first;
    node * prv=NULL;
    display(temp);
    
    while(temp!=NULL){
        if(temp->data ==key){
                prv->next=temp->next;        // if key is found then we are taking that node to 
                temp->next=first;            // first position so that next time when we search it again we find 
                first=temp;                 // it in one comparision only.
                break;                            
                
                }
        else{
                prv=temp;
                temp=temp->next;
        }
    }
    display(first);
}