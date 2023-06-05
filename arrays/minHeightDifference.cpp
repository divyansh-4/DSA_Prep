#include <iostream>
#include <vector>
#include <map>  
#include <bits/stdc++.h>
#include <utility> 
using namespace std;    
    


    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int mini, maxa;
        mini=arr[0];
        maxa=arr[n-1];
        for(int i=0;i<n;i++){
            mini=min(mini,arr[i]-k)
        }
    }