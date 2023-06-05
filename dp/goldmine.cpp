#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;    
    
    bool isVal(int n, int m, int x, int y){
        if(x>=0 && x<=n-1){
            if(y>=0 && y<=m-1){
                return true;
            }
        }
        return false;
    }


    int func(int n, int m, vector<vector<int>> M, int x, int y,vector<vector<int>> &dp){
        if(isVal(n,m,x,y)){
            if(dp[x][y]!=-1)return dp[x][y];
            // cout<<"Was valid"<<endl;
            return dp[x][y]=M[x][y]+max(func(n,m,M,x+1,y+1,dp),max(func(n,m,M,x,y+1,dp),func(n,m,M,x-1,y+1,dp)));
            // return dp[x][y];
        }
        return 0;
    }



    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int maxa=-1;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            // cout<<"Tried"<<endl;
            // for(int k=0;k<n;k++){for(int g=0;g<m;g++){
            //     cout<<dp[k][g]<<" ";
            // }cout<<endl;}
            int a=func(n,m,M,i,0,dp);
            if(maxa<a)maxa=a;
        }
        return maxa;
    }

    int main(){
        vector<vector<int>> M={{1, 3, 1, 5},
     {2, 2, 4, 1},
     {5, 0, 2, 3},
     {0, 6, 1, 2}};
        cout<<maxGold(4,4,M);
    }