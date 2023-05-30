#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int firstBinarySearch( vector<int> arr, int l, int r, int x)
{
    int k=-1;
    while(l <= r) {
        int m = (r + l) / 2; 
        if (arr[m] == x){
            r=m-1;
            k=m;
        }
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return k;
}
int lastBinarySearch( vector<int> arr, int l, int r, int x)
{
    int k=-1;
    while(l <= r) {
        int m = (r + l) / 2;
        if(arr[m] > x){
            r = m - 1;
        }
        if (arr[m] < x)
            l = m + 1;
        if (arr[m] == x){
            l=m+1;
            k=m;
        }
    }
    return k;
}

int main(){
    vector<int> arr={ 1, 3, 5, 5, 5, 5, 7, 123, 125 };
    cout<<firstBinarySearch(arr,0,8,7)<<" "<<lastBinarySearch(arr,0,8,7)<<endl;
}