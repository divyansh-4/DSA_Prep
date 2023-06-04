#include <iostream>
#include <vector>
using namespace std;

int func(int a,int b){
    int c=a^b;
    int ct=0;
    while(c!=0){
        ct+=1;
        c=c&(c-1);
    }
    return ct;
}

int main(){
    cout<<func(20,10);
}