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
    que.push(node);
    while(!que.empty()){
        Node* temp=que.front();
        que.pop();
        ret.push_back(temp->data);
        if(temp->left!=NULL){
            que.push(temp->left);
        }
        if(temp->right!=NULL){
            que.push(temp->right);
        }
    }
    return ret;

}