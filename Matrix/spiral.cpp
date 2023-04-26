#include <iostream>
#include <vector>
using namespace std;

void func(vector<vector<int>> matrix, int l, int r, int t, int b, vector<int> &ans){
    for(int i=l;i<=r;i++){
        ans.push_back(matrix[t][i]);
    }
    t+=1;
    // cout<<"One here"<<endl;
    for(int j=t;j<=b;j++){
        ans.push_back(matrix[j][r]);
    }
    r-=1;
    // cout<<"One here"<<endl;
    for(int k=r;k>=l;k--){
        ans.push_back(matrix[b][k]);
    }
    b-=1;
    // cout<<"One here"<<endl;

    for(int y=b;y>=t;y--){
        ans.push_back(matrix[y][l]);
    }
    l+=1;
    // cout<<"One here"<<endl;
    if(r>l){
        func(matrix,l,r,t,b,ans);
    }
}

int main(){
    vector<vector<int>> matrix;
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    matrix.push_back(a);
    vector<int> b;
    b.push_back(5);
    b.push_back(6);
    b.push_back(7);
    b.push_back(8);
    matrix.push_back(b);
    vector<int> c;
    c.push_back(9);
    c.push_back(10);
    c.push_back(11);
    c.push_back(12);
    matrix.push_back(c);
    vector<int> d;
    d.push_back(13);
    d.push_back(14);
    d.push_back(15);
    d.push_back(16);
    matrix.push_back(d);
    // cout<<matrix[3][2]<<endl;
    vector<int> ans;
    func(matrix,0,3,0,3,ans);
    for(int i=0;i<16;i++){
        cout<<ans[i]<<" ";
    }
}