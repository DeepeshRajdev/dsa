#include<bits/stdc++.h>
using namespace std;


bool isOperand(char c);
int pre(char c);
string infixTOpostfix(string infix);

int main(){
    string infix="a+b+c+d";
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
        stack<int> s;
        postfix.resize(infix.length());
        int i=0,j=0;
        while(infix[i]!='\0'){
            if(isOperand(infix[i])){
                postfix[j++]=infix[i++];
            }
            else{
                if(pre(infix[i])>pre(s.top())){
                    s.push(infix[i]);
                }
                else{
                    postfix[j++]=s.top();
                    s.pop();
                }
            }

        }
        while(!s.empty()){
            postfix[j++]=s.top();
            s.pop();
        }
        postfix[j]='\0';
        return postfix;
}