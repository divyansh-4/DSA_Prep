#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

vector<int> leftSmaller(int n, int a[]){
        vector<int>ans(n,-1);  // Initialize the ans vector with -1
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() and s.top()>=a[i])
                s.pop();    
                
            if(!s.empty())
            {
                ans[i]=s.top();
            } 
            s.push(a[i]);
        }
        return ans;

    }