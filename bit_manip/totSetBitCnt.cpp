#include <iostream>
#include <vector>
using namespace std;

int func(int n){
    if(n==0)return 0;
    int a=1;
    int po=0;
    while(a*2<=n){
        a=a*2;
        po+=1;
    }
    // cout<<"Power here is:"<<po<<endl;
    int fir=(1<<(po-1))*po;
    // cout<<"First one here is: "<<fir<<endl;
    int two=n-(1<<po)+1;
    // cout<<"Two here is: "<<two<<endl;
    int ans=fir+two+func(n-(1<<po));
    // cout<<ans<<endl;
    return ans;

}

int main(){
    cout<<func(17);
}