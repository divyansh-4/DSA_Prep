#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include<numeric>
using namespace std;
    
    
int func(int x, int y, int z, string s1, string s2,string s3,vector<vector<vector<int>>> &dp)
{
    
    if(x>=0 && y>=0 && z>=0){
        if(dp[x][y][z]!=-1)return dp[x][y][z];
        if(s1[x]==s2[y]==s3[z]){
            return dp[x][y][z]=1+func(x-1,y-1,z-1,s1,s2,s3,dp);
        }
        if(s1[x]==s2[y]){
            return dp[x][y][z]=1+func(x-1,y-1,z,s1,s2,s3,dp);
        }
        if(s2[y]==s3[z]){
            return dp[x][y][z]=1+func(x,y-1,z-1,s1,s2,s3,dp);
        }
        if(s1[x]==s3[z]){
            return dp[x][y][z]=1+func(x-1,y,z-1,s1,s2,s3,dp);
        }
        return dp[x][y]=max(func(x-1,y,z-1,s1,s2,s3,dp),func(x,y-1,s1,s2,dp));
    }
    return 0;
}


    
int lcs(int x, int y, int z, string s1, string s2,string s3)
{
        
    vector<vector<vector<int>>> dp(x+1, vector<vector<int>>(y+1, vector<int>(z+1,-1)));
    return func(x,y,s1,s2,dp);


}

int main(){
    string s1="ABCDGH";
    string s2="AEDFHR";
    string s3="AEDFHR";

    cout<<lcs(s1.size()-1,s2.size()-1 ,s3.size()-1,s1,s2,s3);
}