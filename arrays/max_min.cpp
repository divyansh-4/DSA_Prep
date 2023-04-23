#include <iostream>
#include <vector>
using namespace std;

vector<int> func(vector<int> &arr){
    int maxa,mini;
    if(arr[0]>arr[1]){
        maxa=arr[0];
        mini=arr[1];
    }
    else{
        maxa=arr[1];
        mini=arr[0];
    }
    for(int i=2;i<arr.size();i++){
        if(maxa>arr[i]){
            maxa=arr[i];
        }
        if(mini<arr[i]){
            mini=arr[i];
        }
    }
    vector<int> ret;
    ret.push_back(maxa);
    ret.push_back(mini);
    return ret;
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(15);
    arr.push_back(44);
    arr.push_back(12);
    arr.push_back(19);
    arr.push_back(7);
    vector<int> arr2=func(arr);
    cout<<arr2[0]<<", "<<arr2[1]<<endl;

}