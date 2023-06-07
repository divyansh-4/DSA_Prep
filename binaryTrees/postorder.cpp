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

void recursivePostOrder(Node* root){
    if(root!=NULL){
        recursivePostOrder(root->left);
        recursivePostOrder(root->right);
        cout<<root->data;
    }
}

void iterativePosrOrder(Node* root){
    if(root==NULL)return;
    stack<Node*> stac;
    stac.push(root);
    while(!(stac.empty())){
        
    }
}