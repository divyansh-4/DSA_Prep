#include <iostream>
#include <vector>
using namespace std;

int main(){
    int ct=0;
    int n;
    cin>>n;
    while(n!=0){
        n=n&n-1;
        ct+=1;
    }
    cout<<ct<<endl;
}