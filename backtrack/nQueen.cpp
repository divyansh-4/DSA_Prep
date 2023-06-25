#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

void solve(int c,vector<vector<int>> &board,vector<vector<vector<int>>> &ans,vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n){
    if(c==n){
        ans.push_back(board);
        return;
    }
    for(int i=0;i<n;i++){
        if(leftRow[i]==0 && lowerDiagonal[i+c]==0 && upperDiagonal[n-1+c-i]==0){
            board[i][c]=1;
            leftRow[i]=1; lowerDiagonal[i+c]=1; upperDiagonal[n-1+c-i]=1;
            solve(c+1,board,ans,leftRow,upperDiagonal,lowerDiagonal,n);
            board[i][c]=0;
            leftRow[i]=0; lowerDiagonal[i+c]=0; upperDiagonal[n-1+c-i]=0;
        }
    }

}

vector<vector<vector<int>>> func(vector<vector<int>> & board, int n){
    vector<vector<vector<int>>> ans;
    vector<int> leftRow(n,0),upperDiagonal((2*n)-1,0),lowerDiagonal((2*n)-1,0);

}