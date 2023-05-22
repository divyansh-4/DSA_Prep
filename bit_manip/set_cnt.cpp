#include <iostream>
#include <vector>
using namespace std;

int setcnt(int n){
    int ct=0;
    while(n>0){
        n=n&(n-1);
        ct+=1;
    }
    return ct;
}

int main(){
    int a=setcnt(6);
    cout<<a<<endl;
}