#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(int arr[], int n){
        
        //FInd first positive number
        // int i=0;
        // for(i=0;i<n;i++){
        //     if(arr[i]>0)break;
        // }
        //
        // int k=i;
        long long su=0;
        long long sumax=INT32_MIN;
        for(int i=0;i<n;i++){
            su+=arr[i];
            if(su>sumax)sumax=su;
            if(su+arr[i]<=0)su=0;
        }
        return sumax;

        
    }

int main(){
    int arr[]={-34 ,95, -75, -17, 59, 53, -100, 59 ,42 ,-24, -27, -61, -95 ,-96, 29};
    cout<<maxSubarraySum(arr,15);
}