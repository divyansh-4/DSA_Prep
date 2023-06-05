#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

bool isValid(int x, int y,  vector<vector<bool>>& vis,vector<vector<int>> &m, int n){
        if(x<n && y<n && x>=0 && y>=0 && vis[x][y]!=1 && m[x][y]==1)return true;
        return false;
}
void ratMaze(int x, int y, vector<vector<int>> &m, int n, vector < string > &ans, vector<vector<bool>>& vis, string st){
             if(x==n-1 && y==n-1){
            ans.push_back(st);
            return ;
        }
    
     vis[x][y]=1;
        //downnward
        if(isValid(x+1,y,vis,m,n)){
            ratMaze(x+1,y,m,n,ans,vis,st+'D');
        }
         if(isValid(x,y-1,vis,m,n)){
            ratMaze(x,y-1,m,n,ans,vis,st+'L');
        }
        //right
        if(isValid(x,y+1,vis,m,n)){
            ratMaze(x,y+1,m,n,ans,vis,st+'R');
        }
        //left
       
        //upward
        if(isValid(x-1,y,vis,m,n)){
            ratMaze(x-1,y,m,n,ans,vis,st+'U');
        }
        
        vis[x][y]=0;
}

int main(){
   int n=4;
vector<vector<int>> m={{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};
    string st="";
    vector < string > ans;
     vector<vector<bool>> vis(n,vector<bool>(n,0));
    ratMaze(0,0,m,n,ans,vis,st);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}