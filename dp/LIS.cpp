#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include<numeric>
#include<bits/stdc++.h>
using namespace std;


int func(int n, int a[],int ind, int prev,vector<vector<int>> &dp){
    if(ind==n)return 0;
    if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
    int C=func(n,a,ind+1,prev,dp);
    if(prev==-1 || (a[ind]>a[prev])){
        C=max(C,1+func(n,a,ind+1,ind,dp));
    }
    return dp[ind][prev+1]=C;
} 

int func2(int n, int a[]){
    vector<int> ans;
    ans.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>ans.back())ans.push_back(a[i]);
        else{
            int t=lower_bound(ans.begin(),ans.end(),a[i])-ans;
            ans[t]=a[i];

        }
    }
    return ans.size();
}
 
    int longestSubsequence(int n, int a[])
    {
       return func2(n,a);
    }

int main(){
    int a[]={5,8,3,7,9,1};
    int n=6;
    cout<<longestSubsequence(n,a)<<endl;
}