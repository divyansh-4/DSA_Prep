#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <string>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

bool func(string s1, string s2){
    map<char,int> map1;
    map<char,int> map2;
    map<char,int> map3;
    for(int i=0;i<s1.size();i++){
        map1[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        map2[s2[i]]++;
    }
    for(int i=0;i<s3.size();i++){
        map3[s3[i]]++;
    }
    for(int i=0;i<s3.size();i++){
        if(map3[s3[i]]!=(map2[s3[i]]+map1[s3[i]])return false;
    }
    return true;

}

int main(){
    string s1="Helloep";
    string s2="Helpoet";
    cout<<func(s1,s2);
}
