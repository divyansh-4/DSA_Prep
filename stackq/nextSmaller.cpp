#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

vector<int> leftSmaller(int n, vector<int> a){
        vector<int>ans(n,-1);  // Initialize the ans vector with -1
        stack<int>s;
        for(int i=n-1;i>=0;i--)
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

int main(){
    vector<int> ans;
    vector<int> a={3, 8, 5, 2, 25};
    ans=leftSmaller(5,a);
    for(auto it:ans){
        cout<<it<<", ";
    }
    cout<<endl;
}


