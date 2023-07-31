#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    char data;
    node *next;
    node(){
    data=0;
    next=NULL;
    }
};

class st{
    public:
    node* top;
    st(){
        top=NULL;
    }
   void push(int x);
   int pop();
   int tp();
};

int st::tp(){
    if(top){
        return top->data;
    }
}
void st::push(int x){
    node* temp=new node();
    temp->data=x;
    temp->next=top;
    top=temp;
}
int st::pop(){
    if(top == NULL) return -1;
    else{
    int x;
    node *p=top;
    x=p->data;
    top=top->next;
    delete p;
    return x;
    }
}

bool isOperand(char c);
int pre(char c);
string infixTOpostfix(string infix);

int main(){
    string infix="";
    string postfix=infixTOpostfix(infix);
    cout<<postfix<<endl;
}


bool isOperand(char c){
    if(c=='+'||c=='%'||c=='*'||c=='-') return 0;
    else return 1;

}
int pre(char ch){
    if(ch=='*'||ch=='%') return 2;
    else if(ch=='+'||ch=='-') return 1;
    else return 0;
}
string infixTOpostfix(string infix){
        string postfix;
        st s;
        postfix.resize(infix.length());
        int i=0,j=0;
        while(infix[i]!='\0'){
            if(isOperand(infix[i])){
                postfix[j++]=infix[i++];
            }
            else{
                if(pre(infix[i])>pre(s.tp())){
                    s.push(infix[i]);
                }
                else{
                    postfix[j++]=s.pop();
                }
            }

        }
        while(s.top){
            postfix[j++]=s.pop();
        }
        postfix[j]='\0';
        return postfix;
}