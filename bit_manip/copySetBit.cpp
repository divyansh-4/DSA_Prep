#include <iostream>
#include <vector>
using namespace std;


    int setSetBit(int x, int y, int l, int r){
        int a=(1<<(r-l+1))-1;
        a<<(l-1);
        a=a&y;
        x=x|a;
        return x;
    }




int main(){
    cout<<setSetBit(44,3,1,5);

}