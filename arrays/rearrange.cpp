#include <iostream>
#include <vector>
using namespace std;



	void rearrange(int arr[], int n) {
	    int i=0;
        int j=1;
        while(i<n && j<n){
            if(arr[i]>=0){
                i+=2;
            }
            if(arr[j]<0){
                j+=2;
            }
            if(arr[i]<0 && arr[j]>=0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
	}