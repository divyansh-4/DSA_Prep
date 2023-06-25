#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include<numeric>
using namespace std;


    int maxPro(int K, int N, int A[],int n,int buy) {
        if(n>N-1 || K<0)return 0;
        int maxa=INT32_MIN;
        if(buy){
            return max((-1*A[n])+maxPro(K-1,N,A,n+1,0),0+maxPro(K,N,A,n+1,1));
        }
        else{
            return max((A[n])+maxPro(K-1,N,A,n+1,1),0+maxPro(K,N,A,n+1,0));
        }

    }

    int maxProfit(int K, int N, int A[]) {
        return maxPro(K,N,A,0,1);
    }
    