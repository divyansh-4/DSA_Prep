#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include<string>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &St, int n){
    stack<int> que;
    while(!(St.empty())){
        que.push(St.top());
        St.pop();
    }
    St.push(n);
    while(!(que.empty())){
        St.push(que.top());
        que.pop();    
    }
}

void Reverse(stack<int> &St){
    if(!(St.empty())){
        int a=St.top();
        St.pop();
        Reverse(St);
        insertAtBottom(St,a);
    }
}