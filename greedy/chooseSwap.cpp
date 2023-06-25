#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <utility>
#include <bits/stdc++.h>
using namespace std;

    string chooseandswap(string s){
        vector<int> occ(26,-1);
        int n=s.size();
        for (int i = 0; i < n; i++)
        {
            if(occ[s[i]-'a']==-1){
                occ[s[i]-'a']=i;
            }
        }
        char fir, sec;
        for (int i = 0; i < n; i++)
        {
            char cmp='a';
            bool found=false;
            while(cmp<s[i]){
                if(occ[cmp-'a']>i){
                    fir=cmp;
                    sec=s[i];
                    found=true;
                    break;

                }
                cmp++;
            }
            if(found)break;
        }
        for(int i=0;i<n;i++){
            if(s[i]==fir)s[i]=sec;
            else if(s[i]==sec)s[i]=fir;
        }
        return s;       
    }