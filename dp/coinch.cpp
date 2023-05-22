#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;


map<pair<int,int>, int> dp;

int count(vector<int> coins, int N, int sum){
    if(dp.find({N,sum}) != dp.end()){
        return dp[{N,sum}];
    }
    if(sum>0 && N>-1){
        int a=coins[N];
        int b=count(coins,N-1,sum);
        int c=count(coins,N,sum-a);    
        dp[{N-1,sum}]=b;
        dp[{N,sum-a}]=c;
        return b+c;
    }
    if(sum==0){
        return 1;
    }
    return 0;        
}




int main(){
    vector<int> coins={2,3,1};
    cout<<count(coins,2,4)<<endl;
}