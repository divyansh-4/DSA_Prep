#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;


    bool isVal(int row, int col, int ch,int grid[N][N]){
        for(int i=0;i<9;i++){
            if(grid[i][col]==ch)return false;
            if(grid[row][i]==ch)return false;
            if(grid[3*(row/3)+i/3][3*(col/3)+1%3]==ch)return false;
        }
    }
    
    bool solve(int &grid[N][N]){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0){
                    for(int k=1;k<=9;k++){
                        
                        if(isVal(i,j,k,grid)==true){
                            grid[i][j]=k;
                            if(solve(grid)==true)return true;
                        
                        else{
                            grid[i][j]=0;
                        }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool SolveSudoku(int grid[N][N])  
    { 
        return solve(grid);
    }