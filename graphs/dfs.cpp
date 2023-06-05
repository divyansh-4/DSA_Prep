#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <queue>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;



    void func(int V, vector<int> adj[], int n, vector<int> &res, vector<bool> vis){
        res.push_back(n);
        for(int it:adj[n]){
            if(!vis[it]){
                vis[it]=true;
                func(V,adj,it,res,vis);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> res;
        vector<bool> vis(V+1,false);
        func(V,adj,0,res,vis);
        return res;
    }