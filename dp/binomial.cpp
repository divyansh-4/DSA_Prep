#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

map<pair<int,int>, int> dp;

int nCr(long long int n, long long int r){
    if(dp.find({n,r}) != dp.end()){
        return dp[{n,r}];
    }
    if(n==r || r==0){
        return 1;
    }
    if(n<r){
        return 0;
    }
    return dp[{n,r}]=nCr(n-1,r-1)+nCr(n-1,r);
}
    int main(){
        int ans=nCr(15,3);
        cout<<ans<<endl;
    }