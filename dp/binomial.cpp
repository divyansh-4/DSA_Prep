#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;


int nCr(int n, int r){
    vector<vector<int>> dp(n+1,vector<int>(r+1,-1));
    return ncr(n,r,dp);
}

int ncr(int n, int r,vector<vector<int>> &dp){
    if(dp[n][r]!= -1){
        return dp[n][r];
    }
    if(n==r || r==0){
        return 1;
    }
    if(n<r){
        return 0;
    }
    return dp[n][r]=ncr(n-1,r-1,dp)+ncr(n-1,r,dp)%1000000007;
}
    int main(){
        int ans=nCr(15,3);
        cout<<ans<<endl;
    }