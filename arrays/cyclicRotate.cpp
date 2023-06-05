#include <iostream>
#include <vector>
using namespace std;

void rotate(int arr[], int n)
{
    int temp3=arr[n-1];
    int temp=arr[1];
    int temp2;
    arr[1]=arr[0];
    for(int i=2;i<n;i++){
        temp2=arr[i];
        arr[i]=temp;
        temp=temp2;
    }
    arr[0]=temp3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={9, 8, 7, 6, 4, 2, 1, 3};
    rotate(arr,8);
}