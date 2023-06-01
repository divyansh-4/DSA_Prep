#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;


//[10,20,30,40,50]
//    A  B  C  D



int mcm(vector<int> arr, int i, int j,vector<vector<int>> &dp){
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==j)return 0;
    int mini=1000000000;
    for(int k=i;k<j;k++){
        int an=(arr[i-1]*arr[k]*arr[j])+mcm(arr,k+1,j,dp)+mcm(arr,i,k,dp);
        mini=min(an,mini);
    }
    return dp[i][j]=mini;
}
int help(int N, vector<int> arr){
    vector<vector<int>> dp(N+1,vector<int>(N+1,-1));
    return mcm(arr,1,N-1,dp);


}

int main(){
    vector<int> arr={10, 30, 5, 60};
    // vector<vector<int>> dp;
    cout<<help(4,arr)<<endl;
}