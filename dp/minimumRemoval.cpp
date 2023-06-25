#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include <bits/stdc++.h>
using namespace std;

int minRemovals(vector<int>& arr, int n, int k)
{
    if(n==1)return 0;
	int ans=n-1;
    sort(arr.begin(), arr.end());
    for (int i = 1; i <n; i++)
    {
        int j=upper_bound(arr.begin(),arr.end(),arr[i]+k)-arr.begin()-1;
        ans=min(ans,n-(j-i+1));
    }
    return ans;
    
}