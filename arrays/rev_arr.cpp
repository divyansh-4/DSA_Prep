#include <iostream>
#include <vector>
using namespace std;

void iterfunc(vector<int> &arr){
    int len=arr.size();
    for(int i=0;i<len/2;i++){
        int temp=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=temp;
    }
}

void recfunc(vector<int> &arr,int star,int en){
    int len=arr.size();
    if(star<len/2){
        int temp=arr[star];
        arr[star]=arr[en];
        arr[en]=temp;
        recfunc(arr,star+1,en-1);
    }
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
    iterfunc(arr);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }
    recfunc(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }
}