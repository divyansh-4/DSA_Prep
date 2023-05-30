#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;
stack<int> stack1;
stack<int> stack2;
int size=0;

void push(int x){
    if(size==0){
        stack1.push(x);
        size=1;
        return;
    }
    size=0;
    stack2.push(x);
    return;
}