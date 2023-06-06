#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

    bool isVal(int x,int y,int n ,int m){
        cout<<"Validatiinf"<<x<<", "<<y<<endl;
        if(x>=0 && x<=n-1 && y>=0 && y<=m-1){
            cout<<"Validted"<<endl;
            return true;
        }
        cout<<"Unvalidated"<<endl;
        return false;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>> rots;
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    rots.push_back({i,j});
                }
                if(grid[i][j]==1){
                    fresh+=1;
                }
            }
        }
        cout<<"Frres: "<<fresh<<endl;
        queue<pair<pair<int,int>,int>> que;
        for(int i=0;i<rots.size();i++){
            que.push({rots[i],0});
            cout<<"Pushing x,y: "<<rots[i].first<<", "<<rots[i].second<<endl;
        }
        int time=0;
          while(!que.empty()){
            pair<pair<int,int>,int> temp=que.front();
            int a=temp.first.first;
            int b=temp.first.second;
            int time=temp.second;cout<<"Time: "<<time<<endl;
            que.pop();
            if(isVal(a-1,b,n,m)){
                if(grid[a-1][b]==1){
                    cout<<"Rot at: "<<a-1<<", "<<b<<endl;
                    grid[a-1][b]=2;
                    fresh-=1;
                    que.push({{a-1,b},time+1});
                }
            }
            if(isVal(a+1,b,n,m)){
                if(grid[a+1][b]==1){
                    cout<<"Rot at: "<<a+1<<", "<<b<<endl;
                    grid[a+1][b]=2;
                    fresh-=1;
                    que.push({{a+1,b},time+1});
                }
            }
            if(isVal(a,b-1,n,m)){
                if(grid[a][b-1]==1){
                    cout<<"Rot at: "<<a<<", "<<b-1<<endl;
                    grid[a][b-1]=2;
                    fresh-=1;
                    que.push({{a,b-1},time+1});
                }
            }
            if(isVal(a,b+1,n,m)){
                if(grid[a][b+1]==1){
                    cout<<"Rot at: "<<a<<", "<<b+1<<endl;
                    grid[a][b+1]=2;
                    fresh-=1;
                    que.push({{a,b+1},time+1});
                }
            }

        }
        if(fresh==0){
            return time;
        }
        return -1;

    }

    int main(){
        vector<vector<int>> grid={{0,1,2},{0,1,2},{2,1,1}};
        cout<<orangesRotting(grid)<<endl;
    }