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
    Node* left, * right;
};


vector<int> diagonal(Node *root)
{
    vector<int> ans;
    queue<Node*> que;
    // que.push(root->left);
    Node* temp=root;
    while(temp!=NULL){
        ans.push_back(temp->data);
        if(temp->left!=NULL)que.push(temp->left);
        temp=temp->right;
    }
    while(!que.empty()){
        temp=que.front();
        que.pop();
        while(temp!=NULL){
            ans.push_back(temp->data);
            if(temp->left!=NULL)que.push(temp->left);
            temp=temp->right;
        }
    }
    return ans;
}