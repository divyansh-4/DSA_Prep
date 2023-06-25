#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

    int wordBreak(string A, vector<string> &B) {
        int n=A.size();
        vector<bool> dp(n+1,false);
        dp[n]=true;
        for(int i=n-1;i>=0;i--){
            for(auto it:B){
                if(i+it.size()<=n && A.substr(i,it.size())==it){
                    dp[i]=dp[i+it.size()];
                }
                if(dp[i]){
                    break;
                }
            }
        }
        return dp[0];
    }