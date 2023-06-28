#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;



void func(int n, vector<string>& dict, string s, vector<string>& ans,string here, int k){
    if (k == s.size()) {
        ans.push_back(here);
        return;
    }
    for (int i = k; i < s.size(); i++) {
        for (const auto& it : dict) {
            if (s.substr(k, i - k + 1) == it) {
                if(i==s.size()-1)func(n, dict, s, ans, here + it, i + 1);
                else{func(n, dict, s, ans, here + it + " ", i + 1);}
            }
        }
    }
}
vector<string> wordBreak(int n, vector<string>& dict, string s){
    vector<string> ans;
    func(n,dict,s,ans,"",0);
    return ans;
}
