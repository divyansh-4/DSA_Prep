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


bool findPair(int arr[], int size, int n){
    sort(arr, arr+size);
for(int i = 0; i < size; i++) {
    int a = n + arr[i];
    if(binarySearch(arr, i+1, size-1, a) != -1)
        return true;
}

    return false;
}       