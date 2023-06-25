#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;    
    
    
    int dist(string s1,string s2, int i1, int i2,vector<vector<int>> &dp){
        if(i1<0)return i2+1;
        if(i2<0)return i1+1;
        if(dp[i1][i2]!=-1)return dp[i1][i2];
        if(s1[i1]==s2[i2]){
            return dp[i1][i2]=0+dist(s1,s2,i1-1,i2-1,dp);
        }
        return dp[i1][i2]=1+min(min(dist(s1,s2,i1,i2-1,dp),dist(s1,s2,i1-1,i2,dp)),dist(s1,s2,i1-1,i2-1,dp));
    
        
    }
    
    int editDistance(string s, string t) {
        vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,-1));
        return dist(s,t,s.size()-1,t.size()-1,dp);
    }