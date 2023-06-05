#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;


// int func()


int func(int n,int x,int y,int z,vector<int> &dp){
    if(n<0)return -2147483647;
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=1+max(func(n-x,x,y,z,dp),max(func(n-y,x,y,z,dp),func(n-z,x,y,z,dp)));

}

int maximizeTheCuts(int n, int x, int y, int z)
{
    
    vector<int> dp(n+1,-1);
    int a=func(n,x,y,z,dp);
    if(a<0)return 0;
    return a;

}

int main(){
    // cout<<maximizeTheCuts(3119,3515,1021,7);
    int n=21;
    cout<<(n&1)<<endl;
}