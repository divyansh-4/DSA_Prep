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

void recursicePreord(Node *root){
    if(root!=NULL){
        cout<<root->data;
        recursicePreord(root->left);
        recursicePreord(root->right);
    }
}

void iterativePreord(Node* root){
    stack<Node*> stac;
    if(root==NULL)return;
    stac.push(root);
    while(!(stac.empty())){
        Node *temp=stac.top();
        stac.pop();
        cout<<temp->data;

        if(temp->right!=NULL){
            stac.push(temp->right);
        }
        if(temp->left!=NULL){
            stac.push(temp->left);
        }
    }
}