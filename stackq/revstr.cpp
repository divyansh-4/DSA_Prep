#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

char* reverse(char *S, int len)
{
    stack<char> stac;
    for(int i=0;i<len;i++){
        stac.push(S[i]);
    }
    for(int i=0;i<len;i++){
        S[i]=stac.top();
        stac.pop();
    }
    return S;
}