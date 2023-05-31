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
vector<int> levelOrder(Node *node){
    vector<int> ret;
    queue<Node*> que;
    stack<int> stac;
    que.push(node);
    while(!que.empty()){
        Node* temp=que.front();
        stac.push(temp->data);
        que.pop();
        if(temp->right!=NULL){
            que.push(temp->right);
        }
        if(temp->left!=NULL){
            que.push(temp->left);
        }
    }
    while(!stac.empty()){
        ret.push_back(stac.top());
        stac.pop();
    }
    return ret;

}