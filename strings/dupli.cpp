#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

map<char,int> map1;

void func(string s){
    map<char,int> map1;
    for(int i=0;i<s.size();i++){
        map1[s[i]]++;
    }
    for (auto it : map1) {
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}

int main(){
    string s="geeksforgeeks";
    func(s);
}