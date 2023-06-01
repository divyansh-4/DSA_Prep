#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

bool rev(vector<char> &s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1])return false;
    }
    return true;
}