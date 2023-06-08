#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

string ispar(string x)
    {
    stack<char> stac;
    stac.push('x');
    string st="";
    for(int i=0;i<x.size();i++){
        char ch=x[i];
        if(ch!=')'){
            stac.push(ch);
        }
        else if(ch==')'){
            char c=stac.top();
            if(c=='(')stac.pop();
            else{
                
            }
            // stac.pop();
            // if(c!='(')st+=c;
            // // if(stac.top()=='*'||stac.top()=='/'||stac.top()=='+'||stac.top()=='-')
            // if(stac.top()=='(')stac.pop();
            // st=stac.top()+st;
            // stac.pop();
            // st=stac.top()+st;
            // stac.pop();            
        }
    }
    return st;
}

int main(){
    string st="(A*(B+C))";
    cout<<ispar(st)<<endl;
    // st+="}";
    // cout<<st<<endl;    
    // st="{"+st;
    // cout<<st<<endl;
}
