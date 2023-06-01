#include <iostream>
#include <vector>
using namespace std;

int search(vector<vector<int>> matrix,int val){
    if(matrix.size()==matrix[0].size()==1){
        if(matrix[0][0]==val){
            return true;
        }
        return false;
    }
    int l=0;
    int r=matrix.size()-1;
    // cout<<"NUmber of rows:"<<r+1<<endl;
    int m;
    // cout<<"reached here2";
    while (l<=r)
    {
        // cout<<"reached here1";
        // cout<<"did once";
        m=(l+r)/2;
        if(m==matrix.size()-1 && val>=matrix[m][0]){
            // cout<<"l, r"<<l<<" "<<r<<endl;
            // cout<<"Found m here as: breaking"<<m-1<<endl;
            break;
        }
        if(val<matrix[m][0] && val>=matrix[m-1][0]){
            cout<<"vsd"<<matrix[m-1][0]<<endl;
            cout<<"Found m here as: "<<m-1<<endl;
            m-=1;
            break;
        }
        else if(val<matrix[m][0]){
            r=m-1;
        }
        else if(val>matrix[m][0]){
            l=m+1;
        }
    }
    // cout<<"reached here";
    l=0;
    r=matrix[0].size()-1;
    // cout<<"NUmber of columns:"<<r+1<<endl;
    int k;
    while(l<=r){
        k=(l+r)/2;
        if(val==matrix[m][k]){
            return 1;
        }
        else if(val<matrix[m][k]){
            r=k-1;
        }
        else if(val>matrix[m][k]){
            l=k+1;
        }
    }
    return 0;

}

int main(){
    // cout<<"sdfgvsdf";
    vector<vector<int>> matrix;
    // cout<<"sdfgvsdf";
    matrix.push_back({1,1});
    // matrix.push_back({10,11,16,20});
    // matrix.push_back({23,30,34,60});
    // cout<<"DOingr";
    cout<<search(matrix,0)<<endl;


}