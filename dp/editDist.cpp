#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

int dist(string s1,string s2, int i1, int i2,vector<vector<int>> &dp){
    if(i1<0)return i2+1;
    if(i2<0)return i1+1;
        if(dp[i1][i2]!=-1){
        return dp[i1][i2];
    }
    char ch1=s1[i1];
    char ch2=s2[i2];
    if(ch1==ch2){
        return dp[i1][i2]=dist(s1,s2,i1-1,i2-1,dp);
    }
    int a=min((1+dist(s1,s2,i1,i2-1,dp)),(1+dist(s1,s2,i1-1,i2,dp)));
    a=min(a,1+dist(s1,s2,i1-1,i2-1,dp));
    return dp[i1][i2]=a;
}
int main(){
    string s1="geek";
    string s2="gesek";
    vector<vector<int>> dp(s1.size(),vector<int>(s2.size(),-1));
    cout<<dist(s1,s2,s1.size()-1,s2.size()-1,dp)<<endl;
}