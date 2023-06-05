#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;



    long long int ans(int n, vector<long long int> &dp){
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n<=1){
            return dp[n]=1;
        }
        return dp[n]=(ans(n-1,dp)%1000000007+((n-1)*ans(n-2,dp))%1000000007)%1000000007;
    }
    
    int countFriendsPairings(int n) 
    { 
        vector<long long int> dp(n+1,-1);
        return ans(n,dp);
    }

    int main(){
        cout<<countFriendsPairings(6569);
    }