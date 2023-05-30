#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;


int knapSack(int w, vector<int> wt, vector<int> val, int n){ 
        if(n==0){
            if(wt[n]<=  w)return wt[n];
            return 0;
        }
        int take=-1;
        if(wt[n]<=w){
            take=val[n]+knapSack(w-wt[n],wt,val,n-1);
        }
        int notake=0+knapSack(w,wt,val,n-1);
        return max(take,notake);    


}

int main(){
    vector<int> val={1,2,3};
    vector<int> wt={4,5,1};
    cout<<knapSack(4,wt,val,2);

}