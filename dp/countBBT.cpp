#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

long long int countBT(int h) { 
        if(h==1)return 1;
        if(h==2)return 3;
        vector<long long int> arr={0,1,3};
        for(int i=3;i<h+1;i++){
            arr.push_back(((arr[i-1]*arr[i-1])%1000000007+(arr[i-1]*arr[i-2]*2)%1000000007)%1000000007);
            
        }
        return arr[h];
    }