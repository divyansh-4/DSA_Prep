#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

bool ispar(string x){
    stack<char> stac;
    stac.push('x');
    for(int i=0;i<x.size();i++){
        // int res1=strcmp("{",ch);
        char ch=x[i];
        if(ch=='{' || ch=='(' || ch=='['){
            stac.push(ch);
        }
        if(ch=='}' && stac.top()=='{'){
            stac.pop();
        }
        if(ch==')' && stac.top()=='('){
            stac.pop();
        }
        if(ch==']' && stac.top()=='['){
            stac.pop();
        }
    }
    if(stac.top()=='x'){
        return true;
    }
    return false;
}