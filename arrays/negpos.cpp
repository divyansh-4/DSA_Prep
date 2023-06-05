#include <iostream>
#include <vector>
using namespace std;

void segregate(vector<int> arr){
    int l=0;
    int r=arr.size()-1;
    // for(int i=0;i<arr.size()-1;i++){
    while(l<=r){
        // cout<<"sdfsfg";
        if(arr[r]<0 && arr[l]>0){
            int temp=arr[r];
            arr[r]=arr[l];
            arr[l]=temp;
            r--;
            l++;
        }
        else if(arr[r]<0 && arr[l]<0){
            l++;
        }
        else if(arr[l]>0 && arr[r]>0){
            r--;
        }
        else{
            l++;
            r--;
        }

    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

    // }
}

int main(){
    vector<int> arr={12, 11, -13, -5, 6, -7, 5, -3, -6};
    segregate(arr);
}