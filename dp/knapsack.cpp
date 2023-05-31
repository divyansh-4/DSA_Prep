#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

map<pair<int,int>, int> dp;

int help(int w, vector<int> wt, vector<int> val, int n,vector<vector<int>> &dp){ 
    if(dp[n][w]!=-1){
        return dp[n][w];
    }

        if(n==0){
            if(wt[0]<=  w)return val[0];
            return 0;
        }
        int take=-1;
        if(wt[n]<=w){
            take=val[n]+help(w-wt[n],wt,val,n-1,dp);
        }
        int notake=0+help(w,wt,val,n-1,dp);
        return dp[n][w]=max(take,notake);    


}

int knapSack(int w, vector<int> wt, vector<int> val, int n){
    vector<vector<int>> dp(n,vector<int> (w+1,-1));
    return help(w,wt,val,n-1,dp);
}

int main(){
    vector<int> val={1,2,3};
    vector<int> wt={4,5,1};
    cout<<knapSack(4,wt,val,2);

}
