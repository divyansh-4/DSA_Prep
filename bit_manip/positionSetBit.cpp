#include <iostream>
#include <vector>
using namespace std;

int findPosition(int n) {
        if(n==1)return 1;
        if(n==0)return -1;
        int ct=0;
        while(n!=0){
            if(n%2!=0)return -1;
            ct+=1;
            n=n/2;
            if(n==1)break;
        }
        return ct+1;
    }