#include <iostream>
#include <vector>
using namespace std;
   
    bool isPowerofTwo(long long n){
                if(n==1) return true;
        if(n==0) return false;
        while(n>0){
            if(n%2 != 0) return false;
            n/=2;
            if(n==1) break;
        }  
        return true;
        
    }