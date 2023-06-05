#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

string cs(int n){
    if(n==1){
        string s1="1";
        return s1;
    }
    string s2=cs(n-1);
    int i=0;
    int j=i;
    string ret="";
    while(j<s2.size()){

        if(s2[j]==s2[i]){
            j++;
        }
        else{
            ret+=to_string(j-i);
            ret+=s2[i];
            i=j;
        }
    }
   ret+=to_string(j-i);
    ret+=s2[i];
    i=j;
    return ret;
}

int main(){
    cout<<cs(5)<<endl;
}