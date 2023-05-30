#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> ar;
	    for(int i=0;i<n;i++){
            if(arr[i]==i+1){
                ar.push_back(i);
            }
        }
        return ar;
	}