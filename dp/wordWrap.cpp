#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include<numeric>
using namespace std;


    int func(vector<int> &nums, int k, int i, int rem, vector<vector<int>> &dp){
        if(i==nums.size()-1){
            return 0;
        }
        if(dp[i][rem]!=-1)return dp[i][rem];
        if(nums[i]>rem){
            return dp[i][rem]=((rem+1)*(rem+1))+func(nums,k,i+1,k-nums[i]-1,dp);
        }
        else{
            dp[i][rem]=min((((rem+1)*(rem+1))+func(nums,k,i+1,k-nums[i]-1,dp)),(func(nums,k,i+1,rem-nums[i]-1,dp)));
            return dp[i][rem];
        }

    }


    int solveWordWrap(vector<int>nums, int k) 
    { 
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        return(func(nums,k,0,k,dp));
        
    } 