#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;


void nextLargerElement(vector<int> arr, int n){
        stack<int> stac;
        stac.push(arr[0]);
        vector<int> ans(n,-1);
        for(int i=1;i<n;i++){
            cout<<"heppebb";
            while(arr[i]>stac.top() && !(stac.empty())){
                cout<<"heppebbserfgse";
                ans[i-1]=arr[i];
                stac.pop();
            }
            stac.push(arr[i]);
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<endl;
        }
    }

int main(){
    vector<int> ans={1,3,2,4};
    nextLargerElement(ans,4);
}

