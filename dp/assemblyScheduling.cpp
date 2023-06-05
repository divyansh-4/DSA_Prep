#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include<numeric>
using namespace std;

int carAssembly1(vector<vector<int>>& a, vector<vector<int>>& T, vector<int>& e, vector<int>& x, int n, int N, int line,vector<vector<int>> &dp){

    if(dp[n][line]!=-1)return dp[n][line];
    if(n==N){
        return dp[n][line]=a[line][n]+x[line];
    }
    int altline=1;
    if(line==1)altline=0;
    return dp[n][line]=a[line][n]+min(T[line][n+1]+carAssembly1(a,T,e,x,n+1,N,altline,dp),carAssembly1(a,T,e,x,n+1,N,line,dp));  
      
  }

int main(){
    vector<vector<int>> a={{4, 5, 3, 2}, 
      {2, 10, 1, 4}};
    vector<vector<int>> T={{0,7, 4, 5},
           {0,9, 2, 8}};
    vector<int> e={10,12};
     int N=a[0].size()-1;
    vector<int> x={18,7};
    vector<vector<int>> dp(N+1,vector<int>(2,-1));
    int ans=min(e[0]+carAssembly1(a,T,e,x,0,3,0,dp),e[1]+carAssembly1(a,T,e,x,0,3,1,dp));
    cout<<ans;

}