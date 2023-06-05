#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <queue>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;


    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> que;
        vector<int> ans;
        vector<bool> vis(V+1,false);
        que.push(0);
        vis[0]=true;
        while(!que.empty()){
            int a=que.front();
            ans.push_back(a);
            que.pop();
            for(int it:adj[a]){
                if(!vis[it]){
                    que.push(it);
                    vis[it]=true;
                }
            }

        }
        return ans; 
    }