#include <iostream>
#include <vector>
#include <map>  
#include <stack>
#include <queue>
#include <utility> 
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};   


vector<int> func(Node* root){

    vector<int> ans;
    //QUEUE==><Node,level>
    queue<pair<Node*,int>> que;
    //MAP==><level,Node->data>
    map<int,int> map1;
    que.push({root,0});
    while(!que.empty()){
        Node* temp=que.front().first;
        int lev=que.front().second;
        que.pop();
    
        if(map1.find(lev)==map1.end())map1[lev]=temp->data;
        if(temp->left!=NULL){
            que.push({temp->left,lev-1});
        }
        if(temp->right!=NULL){
            que.push({temp->right,lev+1});
        }
    }
    for(auto it:map1){
        ans.push_back(it.second);
    }
    return ans;



}