#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
#include<numeric>
using namespace std;





long long maxSubarraySum(int arr[], int n, int su)
{
    if(n<0)return 0;
    if(su<0){
        su=0;
    }
    if(n==0)return su;
    return max(su+maxSubarraySum(arr,n-1,su+arr[n]),maxSubarraySum(arr,n-1,0));
}

int main(){
    int arr[]={1,2,3,-2,5};
    cout<<maxSubarraySum(arr,4,0)<<endl;
}