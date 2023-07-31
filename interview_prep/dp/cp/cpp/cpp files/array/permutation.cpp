#include<iostream>
#include<string>
using namespace std;
 
void swap(char *x,char *y);
void perm(string s,int l,int h);
int main(){
    string s="abc";
    perm(s,0,2);
    }

void swap(char *x,char *y){
    char temp=*x;
    *x=*y;
    *y=temp;
}
void perm(string s,int l,int h){
    if(l==h) cout<<s<<" ";
    for(int i=l;i<=h;i++){
        swap(s[l],s[i]);
        perm(s,l+1,h);
        swap(s[l],s[i]);
    }
}