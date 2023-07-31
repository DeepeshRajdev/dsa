#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    node* left;
    int data;
    node* right;

    node(){
        left=NULL;
        data=0;
        right=NULL;
    }
};

void create (){
    queue<node*> q;
    node *p;
    int x;
    node * root=new node();
    cout<<"enter root node : ";
    cin>>x;
    root->data=x;
    q.push(root);
    while(!q.empty()){
        p=q.front();
        q.pop();
        cout<<"enter lchild for "<<p->data<<" ";
        cin>>x;
        if(x!=-1){
            node * temp=new node();
            temp->data=x;
            p->left=temp;
            q.push(temp);
        }
        cout<<"enter rchild for "<<p->data<<" ";
        cin>>x;
        if(x!=-1){
            node * temp=new node();
            temp->data=x;
            p->right=temp;
            q.push(temp);
    }
    
    }
}

void preorder(node*root){
    if(root){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node* root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void postorder(node* root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}


int main(){
    create();
}