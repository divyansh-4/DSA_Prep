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


void mirror(Node* node) {
    queue<Node*> que;
    que.push(node);
    Node* temp;
    Node* swap;
    while(!que.empty()){
        temp=que.front();
        if(temp->left!=NULL)que.push(temp->left);
        if(temp->right!=NULL)que.push(temp->right);
        swap=temp->left;
        temp->left=temp->right;
        temp->right=swap;
        que.pop();
    }
    
}