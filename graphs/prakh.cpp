#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include <queue>
using namespace std;


int bfs(int x,int y,vector<vector<int>> mat,int m,int n){
    queue<pair<int,int>> que;
    que.push({x,y});
    mat[x][y]=0
    if(x+1<m){
        if(mat[x+1][y]==0){
            que.push();
        }
    }

}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat;
    for(int i=0;i<m;i++){
        int v;
        vector<int> row;
        for(int j=0;j<n;j++){
            cin>>v;
            row.push_back(v);
        }
        mat.push_back(row);
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }    
}