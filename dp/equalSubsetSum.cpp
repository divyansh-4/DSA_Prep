#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include<numeric>
using namespace std;

    int func(int su, int n, int arr[], int N, int targ,vector<vector<int>> &dp){
        cout<<"Su, N "<<su<<" " <<n<<endl;
    cout<<"Happe"<<endl;
    if(dp[su][n]!=-1){
        cout<<"memoed"<<endl;
        return dp[su][n];
    }
    if(su==targ){
        cout<<"MAtched"<<endl;
        return dp[su][n]=1;
    }
    if(n>=N){
        cout<<"NOt found n>N"<<endl;
        return dp[su][n]=0;
    }
    if(su>targ){
        cout<<"Not found su>targ"<<endl;
        return dp[su][n]=0;
    }
    return dp[su][n]=(func(su+arr[n],n+1, arr, N, targ,dp) || func(su,n+1, arr, N, targ,dp));   


}

int equalPartition(int N, int arr[])
    {
    // int arr[]={1, 5, 11, 5};
    // int N=4;
    int sum = accumulate(arr,arr+N,0); 
    cout<<sum<<endl;
    if(sum%2==1)return 0;
    else{
    vector<vector<int>> dp((sum)+1,vector<int>(N+1,-1));
    if(func(0,0,arr,N,sum/2,dp)==1)return 1;
    else{
        return 0;
    }
    }
    }

int main(){
    int arr[]={1, 6, 11, 6};
    int N=4;
    cout<<equalPartition(N,arr);
}