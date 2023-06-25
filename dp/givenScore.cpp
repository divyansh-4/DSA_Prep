#include <iostream>
#include <vector>
#include <map>  
#include <utility> 
using namespace std;

long long int func(long long int n){
    if(n==4 || n==1 || n==2 || n==7 || n<0)return 0;
    if(n==0)return 1;
    return func(n-3)+func(n-5)+func(n-10);
}


int main(){
    cout<<func(13)<<endl;
}