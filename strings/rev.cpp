#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

void rev(vector<char> &s){
    for(int i=0;i<s.size()/2;i++){
        char temp=s[i];
        s[i]=s[s.size()-i-1];
        s[s.size()-i-1]=s[i];
    }
    return;
}