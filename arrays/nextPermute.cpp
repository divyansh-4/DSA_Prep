#include <iostream>
#include <vector>
#include <map>  
#include <bits/stdc++.h>
#include <utility> 
using namespace std;  

    void nextPermutation(vector<int>& nums) {
     int n=nums.size();
     int ind=-1;
     for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            ind=i;
            break;
        }
     }   
     if(ind==-1)return reverse(nums.begin(),nums.end());
    //  int mini=INT32_MAX;
    //  int minind=-1;
     for(int i=n-1;i>ind;i--){
        if(nums[i]>nums[ind]){
                int temp=nums[i];
                nums[i]=nums[ind];
                nums[ind]=temp;
                break;
        }
     }
    reverse(nums.begin()+ind+1,nums.end());
    }