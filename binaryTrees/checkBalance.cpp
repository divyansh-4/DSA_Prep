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
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int height(Node* root){
    if(root==NULL)return 0;
    return 1+max(height(root->left),height(root->right));
}

    bool isBalanced(Node *root)
    {
        if(root==NULL)return true;
        int a=height(root->left)-height(root->right);
        if(a==0 || a==1 || a==-1){
            return isBalanced(root->right) && isBalanced(root->left);
        }
        return false;
    }