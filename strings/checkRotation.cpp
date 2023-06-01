#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <string>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

bool func(string s1,string s2){
    if(s1.size()!=s2.size()){
        return false;
    }
    string temp=s1+s1;
    for(int i=0;i<temp.size();i++){
        if(temp.substr(i,s2.size())==s2){
            return true;
        }
    }
    return false;
}

int main(){
    string s1="geeksforgeeks";
    string s2="forgeeksgeeks";
    cout<<func(s1,s2)<<endl;
}