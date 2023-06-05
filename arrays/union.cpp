#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        map<int,int> map1;
        for(int i=0;i<n;i++)map1[a[i]]++;
        for(int i=0;i<m;i++)map1[b[i]]++;
        int ct=0;
        for (auto i = map1.begin(); i != map1.end(); ++i) {
            ct++;        
        }
        return ct;

    }

int main(){
    int a[]={85,25,1,32,54,6};
    int b[]={85,2};
    cout<<doUnion(a,6,b,2);
}