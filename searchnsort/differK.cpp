#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

int search(int arr[], int n, int x, int k)
{
    int i=0;
    while(i<n){
        if(arr[i]==x){
            return i;
        }
        i=i+max(1,abs(arr[i]-x)/k);
    }
    return -1;
}    