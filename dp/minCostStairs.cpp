#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

int func(vector<int>& cost, int n, int k,vector<int>& dp){
    if(k==n)return 0;
    if(k>n)return INT32_MAX;
    if(dp[k]!=-1)return dp[n];
    return dp[n]=cost[k]+min(func(cost,n,k+1,dp),func(cost,n,k+2,dp));
}

int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
    vector<int> dp(n+1,-1);
    return min(func(cost,n,0,dp),func(cost,n,1,dp));
}

int main(){
    vector<int> cost={10,15,20};
    cout<<minCostClimbingStairs(cost);
}