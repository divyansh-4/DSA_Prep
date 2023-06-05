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

void recursive_inorder(Node* root){
    if(root==NULL){
        return;
    }
    recursive_inorder(root->left);
    cout<<root->data;
    recursive_inorder(root->right);
}

void iterative_inorder(Node* root){
    stack<Node*> stac;
    stac.push(root);
    Node *temp=root;
    while(!(stac.empty())||temp!=NULL){
        if(temp!=NULL){
            stac.push(temp->left);
            temp=temp->left;
        }
        else{
            temp=stac.top();
            stac.pop();
            cout<<temp->data;
            temp=temp->right;
        }
    }
}