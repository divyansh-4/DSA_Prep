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
     
     
    bool isBST(Node* root) 
    {
        queue<Node*> que;
        que.push(root);
        Node* temp;
        while(!que.empty()){
            temp=que.front();
            if((temp->left!=NULL && temp->right!=NULL)){
                if(temp->left->data>=temp->data || temp->right->data<=temp->data){
                    return false;
                }
            }
            else if(temp->left==NULL && temp->right!=NULL){
                if(temp->right->data<=temp->data)return false;
            }
            else if(temp->left!=NULL && temp->right==NULL){
                if(temp->left->data>=temp->data)return false;
            }
            que.pop();
            if(temp->left!=NULL)que.push(temp->left);
            if(temp->right!=NULL)que.push(temp->right);
            
        }
        return true;
    }