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

int diameter(Node *root)
{
    if(root->left==root->right==NULL){
        return 0;
    }
    if(root->right==NULL && root->left!=NULL)return 1+diameter(root->left);
    if(root->left==NULL && root->right!=NULL)return 1+diameter(root->right);
    return 1+diameter(root->right)+1+diameter(root->left);
}