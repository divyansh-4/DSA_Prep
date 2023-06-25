#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

	int maxSubstring(string S)
	{
	    int n=S.size();
        int ct=0;
        vector<int> a;
        for(int i=0;i<n;i++){
            if(S[i]=='0')a.push_back(1);
            else{
                ct+=1;
                a.push_back(-1);
            };
            
        }
        if(ct==n)return -1;
        int sumax=INT32_MIN;
        int su=0;
        for(int i=0;i<n;i++){
            cout<<a[i]<<", ";
            su+=a[i];
            sumax=max(su,sumax);
            if(su<0)su=0;
        }
        cout<<endl;
        return sumax;
	}


int main(){
    cout<<maxSubstring("00111")<<endl;
}