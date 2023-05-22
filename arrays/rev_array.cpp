#include <iostream>
#include <vector>
using namespace std;

void iter_rev(vector<int> &arr){
    int len=arr.size();
    for(int i=0;i<len/2;i++){
        int temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;
    }
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rec_rev(vector<int> &arr, int i, int r){
    if(i<arr.size()/2){
        int temp=arr[i];
        arr[i]=arr[r];
        arr[r]=temp;
        rec_rev(arr,i+1,r-1);
    }

}

int main(){
    vector<int> arr={4,2,5,8,3,1};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rec_rev(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}