#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <utility> 
#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;


    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int> stack1;
        stack<int> stack2;
        for(int i=B.size()-1;i>=0;i--){
            stack2.push(B[i]);
        }
        int m=0;
        stack1.push(A[m]);
        m+=1;
        while(m<N){
            while(stack2.top()==stack1.top()){
                cout<<"First ROund: "<<stack1.top()<<endl;
                stack1.pop();
                stack2.pop();
                if((stack1.empty())||(stack2.empty()))break;
                
            }
            stack1.push(A[m]);
            m+=1;
        }
        while(!stack1.empty()){
            if(stack1.top()==stack2.top()){
                cout<<"Second ROund: "<<stack1.top()<<endl;
                stack1.pop();
                stack2.pop();
            }
            else{
                return 0;
            }
        }
        return 1;

    }

    int main(){
        int N = 4;
vector<int> A = {2,4,3,1};
vector<int> B = {3,4,1,2};
cout<<isStackPermutation(3,A,B)<<endl;
    }