#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include <set>
#include<bits/stdc++.h>
using namespace std;


int getMin(string s){
    stack<char> st;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        if(s[i]==')'){
            if(st.empty())st.push(s[i]);
            if(st.top()=='('){
                st.pop();
            }
            if(st.top()==')')st.push(s[i]);
        }
    }
    if(st.empty())return 0;
    return st.size();
}

void func(string s,int mr,set<string> &a){
    if(mr==0){
        if(getMin(s)==0){
            a.insert(s);
        }
    }
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]==')')func(s.substr(0,i)+s.substr(i+1,n-i-1),mr-1,a);
    }
}

vector<string> removeInvalidParentheses(string s) {
    set<string> a;
    vector<string> ans;
    int mr=getMin(s);
    func(s,mr,a);
    for(auto it:a){
        ans.push_back(it);
    }    
    return ans;
}


// #include <iostream>
// #include <vector>
// #include <queue>
// #include <unordered_set>
// using namespace std;

// bool isValid(string s) {
//     int count = 0;
//     for (char c : s) {
//         if (c == '(') {
//             count++;
//         }
//         else if (c == ')') {
//             count--;
//             if (count < 0) {
//                 return false;
//             }
//         }
//     }
//     return count == 0;
// }

// vector<string> removeInvalidParentheses(string s) {
//     vector<string> result;
//     unordered_set<string> visited;
//     queue<string> q;

//     q.push(s);
//     visited.insert(s);

//     bool foundValid = false;

//     while (!q.empty()) {
//         string current = q.front();
//         q.pop();

//         if (isValid(current)) {
//             result.push_back(current);
//             foundValid = true;
//         }

//         if (foundValid) {
//             // If a valid string is found, we don't need to remove more parentheses.
//             continue;
//         }

//         for (int i = 0; i < current.length(); i++) {
//             if (current[i] != '(' && current[i] != ')') {
//                 continue;
//             }

//             string next = current.substr(0, i) + current.substr(i + 1);
//             if (visited.find(next) == visited.end()) {
//                 q.push(next);
//                 visited.insert(next);
//             }
//         }
//     }

//     return result;
// }
