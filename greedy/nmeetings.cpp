#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <utility>
#include <bits/stdc++.h>
using namespace std;

int maxmeetings(vector<int> start, vector<int> end, int n){
    vector<pair<int,int>> meets;
    for(int i=0;i<n;i++){
        meets.push_back({end[i],start[i]});
        // sort(meets.begin(),meets.end());
    }
    sort(meets.begin(),meets.end());
    for(int i=0;i<n;i++){
        cout<<meets[i].first<<":"<<meets[i].second<<endl;
    }
    int ct=1;
    int j=0;
    for(int i=1;i<n;i++){
        if(meets[i].second>meets[j].first){
            ct+=1;
            j=i;
        }
    }
    return ct;
}

int main(){
    vector<int> start={1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};
    maxmeetings(start,end,6);
}