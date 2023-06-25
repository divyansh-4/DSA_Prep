#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<string.h>
#include<bits/stdc++.h>
using namespace std;


    int maxSubStr(string str){
        stack<char> s;
        int ans=0;
        s.push(str[0]);
        int i=1;
            while(i<str.size()){
        while(i<str.size()&&s.size()&&i<str.size()&&(s.top()!=str[i])){
            s.pop();
            i++;
        }
        if(s.empty()){
            ans++;
        }
        while((i<str.size())&&(s.empty()||s.top()==str[i])){
            s.push(str[i]);
            i++;
        }
     }
     if(s.empty())return ans;
     return -1;
}