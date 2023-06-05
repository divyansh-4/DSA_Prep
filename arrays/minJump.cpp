#include <iostream>
#include <vector>
using namespace std;

    int minJumps(int arr[], int n){
        int ans=0;
        int maxa=arr[0];
        for (int i = 0; i < maxa; i++)
        {
            maxa=0;
            for (int j = i+1; j < i+arr[i]+1; j++)
            {
                if(j==n-1){
                    return ans;
                }
                if(arr[maxa]<arr[j])maxa=j;
            }
            // maxa=0;

        }
        
    }