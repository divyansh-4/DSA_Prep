#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <queue>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;


bool isValid(int x, int y, int N){
        if(x<N && y<N && x>=0 && y>=0)return true;
        return false;
}

int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int N)
{
    // vector<vector<int>> board(N,vector<int>(N,0));
    // board[KnightPos[0]-1][KnightPos[1]-1]=1;
    int x=KnightPos[0]-1;
    int y=KnightPos[1]-1;
    int f1=TargetPos[0]-1;
    int f2=TargetPos[1]-1;
    queue<pair<pair<int,int>,int>> que;
    int ans;
    vector<vector<bool>> vis(N+1,vector<bool>(N+1,false));
    vis[KnightPos[0]-1][KnightPos[1]-1]=true;
    que.push({{x,y},0});
    while (!que.empty())
    {
            pair<pair<int,int>,int> a = que.front();
            x=a.first.first;
            y=a.first.second;
            if(x==f1 && y==f2)return a.second;
            que.pop();
            if(isValid(x+2,y+1,N)&&!vis[x+2][y+1]){
                que.push({{x+2,y+1},a.second+1});
                vis[x+2][y+1]=true;
            }
            if(isValid(x+2,y-1,N)&&!vis[x+2][y-1]){
                que.push({{x+2,y-1},a.second+1});
                vis[x+2][y-1]=true;
            }
            if(isValid(x+1,y+2,N)&&!vis[x+1][y+2]){
                que.push({{x+1,y+2},a.second+1});
                vis[x+1][y+2]=true;
            }
            if(isValid(x+1,y-2,N)&&!vis[x+1][y-2]){
                que.push({{x+1,y-2},a.second+1});
                vis[x+1][y-2]=true;
            }
            if(isValid(x-2,y-1,N)&&!vis[x-2][y-1]){
                que.push({{x-2,y-1},a.second+1});
                vis[x-2][y-1]=true;
            }
            if(isValid(x-2,y+1,N)&&!vis[x-2][y+1]){
                que.push({{x-2,y+1},a.second+1});
                vis[x-2][y+1]=true;
            }
            if(isValid(x-1,y+2,N)&&!vis[x-1][y+2]){
                que.push({{x-1,y+2},a.second+1});
                vis[x-1][y+2]=true;
            }
            if(isValid(x-1,y-2,N)&&!vis[x-1][y-2]){
                que.push({{x-1,y-2},a.second+1});
                vis[x-1][y-2]=true;
            }
    }
    return -1;
}

int main(){
    vector<int> KnightPos={4,5};
    vector<int> TargetPos={1,1};
    int N=6;
    cout<<minStepToReachTarget(KnightPos,TargetPos,N);

}