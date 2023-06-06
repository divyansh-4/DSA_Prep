#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <utility>
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};




double fractionalKnapsack(int W, Item arr[], int n)
{
    int ans=0;
    vector<pair<double,int>> ratios;
    for(int i=0;i<n;i++){
        ratios.push_back({(arr[i].value/arr[i].weight),i});
    }
    sort(ratios.begin(),ratios.end());
    reverse(ratios.begin(),ratios.end());
    // for(int i=0;i<n;i++){
    //     cout<<ratios[i].first<<", "<<ratios[i].second;
    // }
    // return 1;
    int i=0;
    while(W!=0){
        Item a=arr[ratios[i].second];
        if(a.weight<=W){
            ans+=a.value;
            W-=a.weight;
            i+=1;
        }
        ans+=(W/a.weight)*a.value;
        W=0;
    }
    return ans;
        
}

int main(){
    
}