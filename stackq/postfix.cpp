#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include<string>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

    int eval(int a, int b, char op){
        if(op=='*')return a*b;
        if(op=='/')return a/b;
        if(op=='+')return a+b;
        if(op=='-')return a-b;
    }

    int evaluatePostfix(string S)
    {
        int ans;
        stack<int> stac;
        string s(1,S[0]);
        int a=stoi(s);
        string t(1,S[1]);
        int b=stoi(t);
        // cout<<"edgdrr  "<<a<<endl;
        // cout<<"ewvvar  "<<b<<endl;
        stac.push(a);
        stac.push(b);
        for(int i=2;i<S.size();i++){
            if(S[i]=='*' || S[i]=='/' || S[i]=='+' || S[i]=='-'){
                // cout<<S[i]<<endl;
                int y=stac.top();
                stac.pop();
                int x=stac.top();
                stac.pop();
                int an=eval(x,y,S[i]);
                // cout<<"x,y,ans: "<<x<<" "<<y<<" "<<an<<endl;
                stac.push(an);
            }
            else{
                string u(1,S[i]);
                int z=stoi(u);
                stac.push(z);
            }
        }
        return stac.top();
    }

    int main(){
        string s1="123+*8-";
        cout<<evaluatePostfix(s1);
    }