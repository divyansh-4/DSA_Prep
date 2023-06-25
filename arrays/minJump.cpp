#include <iostream>
#include <vector>
using namespace std;

    int minJumps(int arr[], int n){
        int ans=0;
        int l=0;
        int r=0;
        while(r<n-1){
            int far=0;
            for(int i=l;i<r+1;i++){
                far=max(far,i+arr[i]);
            }
            l=r+1;
            r=far;
            ans+=1;
        }
        return ans;
        
    }