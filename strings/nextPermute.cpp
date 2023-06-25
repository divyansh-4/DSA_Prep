#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

    vector<int> nextPermutation(int n, vector<int> arr){
        int ind=n;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==n){
            reverse(arr.begin(),arr.end());
            return arr;
        }
        for(int i=n-1;i>ind;i--){
            if(arr[i]>arr[ind]){
                int temp=arr[i];
                arr[i]=arr[ind];
                arr[ind]=temp;
                break;
            }
        }
        reverse(arr.begin()+ind+1,arr.end());
        return arr;

    }