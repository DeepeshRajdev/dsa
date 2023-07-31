#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
     node * next;
};

void display(node *temp);
int sum(node * temp);
int maximum(node *temp);


int main(){
        node * head=new node();
        node * second=new node();                   // creating nodes
        node * third=new node();
        node * end=new node();
        
        
        head->data=1;
        head->next=second;
        second->data=2;
        second->next=third;                         //initialising nodes
        third->data=3;
        third->next=end;
        end->data=4;
        end->next=NULL;
       
         node * temp=head;
       cout<<"elements of this linked list : ";
       display(temp);
       cout<<endl;
        cout<<"sum of elements of this linked list :"<<sum(temp);
}
void display(node *temp){
    if(temp==NULL) return;                          //display list
    cout<<temp->data<<" ";
    display(temp->next);
}

int sum(node* temp){
    if(temp == NULL) return 0;                         //sum of all elements
    return temp->data + sum(temp->next);
}

int maximum(node *temp){

}