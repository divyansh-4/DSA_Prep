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
////     RIGHT    VIEW
void func2(Node* root, int level, vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    func2(root->right,level+1,ans);
    func2(root->left,level+1,ans);
    

}

vector<int> rightView(Node *root)
{
    vector<int> ans;
    func2(root,0,ans);
    return ans;
}
