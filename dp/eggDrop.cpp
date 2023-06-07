#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;


int func(int n, int k,vector<vector<int>> &dp){
    if(k==1 || k==0){
        return k;
    }
    if(n==1){
        return k;
    }
    if(dp[n][k]!=-1)return dp[n][k];
    int mini=INT32_MAX;
    for(int i=k;i>0;i--){
        int a=max(func(n-1,i-1,dp),func(n,k-i,dp));
        mini=min(a,mini);
    }
    return dp[n][k]=1+mini;
}
int eggDrop(int n, int k) 
{
    vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
    return func(n,k,dp);
}

int main(){
    cout<<eggDrop(2,10)<<endl;
}