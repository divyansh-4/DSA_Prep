#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

vector<long long int> rightSmaller(int n, long long a[]){
        vector<long long int>ans(n,-1);  // Initialize the ans vector with -1
        stack<int>s;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() and a[s.top()]>=a[i])
                s.pop();    
                
            if(!s.empty())
            {
                ans[i]=s.top();
            } 
            s.push(i);
        }
        return ans;
}

vector<long long int> leftSmaller(int n, long long a[]){
        vector<long long int>ans(n,-1);  // Initialize the ans vector with -1
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() and a[s.top()]>=a[i])
                s.pop();    
                
            if(!s.empty())
            {
                ans[i]=s.top();
            } 
            s.push(i);
        }
        
        return ans;

    }

    long long getMaxArea(long long a[], int n)
    {
        vector<long long int> nsr=rightSmaller(n,a);
        vector<long long int> nsl=leftSmaller(n,a);
        long long ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,(nsr[i]-nsl[i]-1)*a[i]);
        }
        return ans;
    }
