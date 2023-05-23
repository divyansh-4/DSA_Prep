#include <iostream>
#include <vector>
using namespace std;

void func(vector<int> arr){
    int min=2147483646;
    int max=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"max:"<<max<<"  min:"<<min<<endl;
}   

int main(){
    vector<int> arr={3,5,7,23,4,2,6,4,567,345};
    func(arr);
}