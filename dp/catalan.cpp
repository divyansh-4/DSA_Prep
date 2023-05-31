#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;




int ncr(int n,vector<int> &dp){
    if(n==0 || n==1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int su=0;
    for(int i=0;i<n;i++){
        su+=ncr(i,dp)*ncr(n-i-1,dp);
    }
    dp[n]=su;
    return su;

}

int catalan(int n){
    vector<int> dp(n+1,-1);
    return ncr(n,dp);
}

    int main(){
        int cat=catalan(23);
        cout<<cat<<endl;
    }