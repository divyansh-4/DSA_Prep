#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include <bits/stdc++.h>
using namespace std;

    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && arr[j]==arr[j-1])continue;
                int l=j+1;
                int r=n-1;
                while(l<r){
                    long long sum=arr[i]+arr[j]+arr[l]+arr[r];
                    if(sum==k){
                        ans.push_back({arr[i],arr[j],arr[l],arr[r]});
                        l++;
                        r--;
                        while(l<r && arr[l]==arr[l-1])l++;
                        while(l<r && arr[r]==arr[r+1])r--;                        
                    }
                    else if(sum>k)r--;
                    else l++;           
                }
            }
        }
        return ans;
    }