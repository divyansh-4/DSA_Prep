#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;


int knapSack(int w, vector<int> wt, vector<int> val, int v, int n){ 
    if(n>=0){
        if(w==0){
            return v;
        }
        if(w<0){
            return 0;
        }
        if(w>0){
            return max(knapSack(w-wt[n],wt,val,v+val[n],n-1),knapSack(w,wt,val,v,n-1));
        }
    }
    return v;

}

int main(){
    vector<int> val={1,2,3};
    vector<int> wt={4,5,6};
    cout<<knapSack(3,wt,val,0,2);

}