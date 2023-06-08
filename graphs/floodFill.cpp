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


bool isValid(int x, int y, int m, int n){
        if(x<m && y<n && x>=0 && y>=0)return true;
        return false;
}


vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    int col=image[sr][sc];
    if(col==color)return image;
    image[sr][sc]=color;
    int m=image.size();
    int n=image[0].size();
    stack<pair<int,int>> stac;
    stac.push({sr,sc});
    while(!stac.empty()){
        pair<int, int> temp=stac.top();
        int x=temp.first;
        int y=temp.second;
        stac.pop();
        if(isValid(x+1,y,m,n)){
            if(image[x+1][y]==col){
                image[x+1][y]=color;
                stac.push({x+1,y});
            }
        }
        if(isValid(x,y+1,m,n)){
            if(image[x][y+1]==col){
                image[x][y+1]=color;
                stac.push({x,y+1});
            }
        }
        if(isValid(x-1,y,m,n)){
            if(image[x-1][y]==col){
                image[x-1][y]=color;
                stac.push({x-1,y});
            }
        }
        if(isValid(x,y-1,m,n)){
            if(image[x][y-1]==col){
                image[x][y-1]=color;
                stac.push({x,y-1});
            }
        }
    }
    return image;
}

int main(){
    vector<vector<int>> image={{0,0,0},{0,0,0}};
        for(int i=0;i<image.size();i++){
        for(int j=0;j<image[0].size();j++){
            cout<<image[i][j]<<", ";
        }
        cout<<endl;
    }
    vector<vector<int>> ans=floodFill(image,0,0,1);
    for(int i=0;i<image.size();i++){
        for(int j=0;j<image[0].size();j++){
            cout<<ans[i][j]<<", ";
        }
        cout<<endl;
    }
}
