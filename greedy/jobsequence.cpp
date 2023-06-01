#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <utility>
#include <bits/stdc++.h>
using namespace std;

struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 

    Job(int id, int dead,int profit){
        id=id;
        profit=profit;
        dead=dead;
    }
};

vector<int> jobsched(Job arr[], int n){
    vector<pair<int,int>> jobs;
    int max1=0;
    for(int i=0;i<n;i++){
        if(max1<arr[i].dead){
            max1=arr[i].dead;
        }
        jobs.push_back({arr[i].profit,arr[i].dead});
    }
    vector<int> days(max1,-1);
    sort(jobs.begin(),jobs.end());
    reverse(jobs.begin(),jobs.end());
    // for(int i=0;i<n;i++){
    //     cout<<jobs[i].first<<":"<<jobs[i].second<<endl;
    // }
    int tot=0;
    int su=0;
    for(int i=0;i<n;i++){
        for(int j=jobs[i].second-1;j>=0;j--){
            if(days[j]!=-1){
                days[j]=1;
                su+=jobs[i].first;
                tot+=1;
                break;
            }
        }
    }
    vector<int> ans={tot,su};
    return ans;



}
int main(){
    Job arr[4];
    for(int i=0;i<4;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arr[i]=Job(a,b,c);

    }
    vector<int> an=jobsched(arr,4);

}
