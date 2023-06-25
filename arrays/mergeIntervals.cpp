  

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(int i=0;i<n;i++){
        cout<<intervals[i][0]<<", "<<intervals[i][1]<<endl;
    }
        vector<vector<int>> merged;
        // int n=intervals.size();
        int st=0;
        int end=0;
        int mend=intervals[st][1];
        for(int i=0;i<n;i++){
            if(intervals[i][0]<=mend){
                st=i;
                mend=max(mend,intervals[st][1]);
                cout<<mend<<endl;
                
            }
            else{

                vector<int> pus={intervals[end][0],mend};
                merged.push_back(pus);
                st=i;
                end=i;
                mend=intervals[st][1];
            }
        }
        vector<int> pus={intervals[end][0],mend};
        merged.push_back(pus);
        return merged;

    }


int main(){
    vector<vector<int>> inter={{2,3},{4,5},{6,7},{8,9},{1,10}};
    vector<vector<int>> ans=merge(inter);
    int n=ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i][0]<<", "<<ans[i][1]<<endl;
    }
}