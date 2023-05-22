#include <iostream>
#include <vector>
using namespace std;

void func(vector<vector<int>> matrix, int l, int r, int t, int b, int row, int column){
    int ct=0;
    while(ct<row*column){
        for(int i=l;i<r+1;i++){
            cout<<matrix[t][i]<<" ";
            ct+=1;
        }
        t+=1;
        for(int i=t;i<b+1;i++){
            cout<<matrix[i][r]<<" ";
            ct+=1;
        }
        r-=1;
        for(int i=r;i>l-1;i--){
            cout<<matrix[b][i]<<" ";
            ct+=1;
        }
        b-=1;
        for(int i=b;i>t-1;i--){
            cout<<matrix[i][l]<<" ";
            ct+=1;
        }
        l+=1;
    }
}

int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    func(matrix,0,3,0,3,4,4);
}

