#include <iostream>
#include <vector>
using namespace std;

void func(int arr[],int n){
    int z=0;
    int o=0;
    int t=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            z+=1;
        }
        if(arr[i]==1){
            o+=1;
        }
        if(arr[i]==2){
            t+=1;
        }
    }
    int ind=0;
    for(int i=0;i<z;i++){
        arr[ind]=0;
        ind++;
    }
    for(int i=0;i<o;i++){
        arr[ind]=1;
        ind++;
    }
    for(int i=0;i<t;i++){
        arr[ind]=2;
        ind++;
    }
}

int main(){
    int arr[]={0,2,1,2,0};
    func(arr,5);
}