#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

int binarySearch(vector<int> arr, int x)
{
    int l=0;
    int r=arr.size()-1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)return m;
        //Left half sorted
        if(arr[m]>arr[l]){
            if(x>=arr[l] && x<=arr[m]){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        //Right Half sorted
        else{
            if(x>=arr[m] && x<=arr[r]){
                l=m+1;
            }
            else{
                r=m-1;
            }

        }
        // if (arr[m] < x)
        //     l = m + 1;
        // else
        //     r = m - 1;
    }
    return -1;
}

int main(){
    vector<int> arr={3,1};
    cout<<binarySearch(arr,1);
}