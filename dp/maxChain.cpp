#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include<numeric>
using namespace std;

struct val{
	int first;
	int second;
};

int func(struct val p[],int n, int ind, int prev,vector<vector<int>> &dp){
    if(ind==n)return 0;
    if(dp[ind][prev]!=-1)return dp[ind][prev+1];
    
    int a;
    // if(p[n-1].second<p[n].first)
    a=func(p,n,ind+1,prev,dp);
    if(prev==-1 || (p[ind].first > p[prev].second)){
        a=max(a,1+func(p,n,ind+1,prev,dp));
    }
    return dp[ind][prev+1]=a;
}
int maxChainLen(struct val p[],int n){
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    return func(p,n,0,-1,dp);   
    
}