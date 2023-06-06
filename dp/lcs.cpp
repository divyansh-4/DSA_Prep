#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include<numeric>
using namespace std;
    
    
int func(int x, int y, string s1, string s2,vector<vector<int>> &dp)
{
    
    if(x>=0 && y>=0){
        if(dp[x][y]!=-1)return dp[x][y];
        if(s1[x]==s2[y]){
            return dp[x][y]=1+func(x-1,y-1,s1,s2,dp);
        }
        return dp[x][y]=max(func(x-1,y,s1,s2,dp),func(x,y-1,s1,s2,dp));
    }
    return 0;
}


    
int lcs(int x, int y, string s1, string s2)
{
        
    vector<vector<int>> dp(x+1,vector<int>(y+1,-1));
    return func(x,y,s1,s2,dp);


}

int main(){
    string s1="ABCDGH";
    string s2="AEDFHR";

    cout<<lcs(s1.size()-1,s2.size()-1 ,s1,s2);
}