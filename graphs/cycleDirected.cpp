 #include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <queue>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;
 
 
    void func(int V, vector<int> adj[], int n, vector<int> &res, vector<bool> &vis){
        vis[n]=true;
        res.push_back(n);
        for(int it:adj[n]){
            if(!vis[it]){
                func(V,adj,it,res,vis);
            }
        }
    }

    bool dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> res;
        stack<int> stac;
        vector<bool> vis(V+1,false);
        stac.push(0);
        while(!stac.empty()){
            int a=stac.top();
            if(vis[a])return true;
            stac.pop();
            vis[a]=true;
            for(int it:adj[a]){
                stac.push(it);
            }
        }
        return false;
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
                vector<int> res;
        stack<int> stac;
        vector<bool> vis(V+1,false);
        stac.push(0);
        while(!stac.empty()){
            int a=stac.top();
            if(vis[a])return true;
            stac.pop();
            vis[a]=true;
            for(int it:adj[a]){
                stac.push(it);
            }
        }
        return false;
    }