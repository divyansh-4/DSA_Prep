#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <utility>
#include <bits/stdc++.h>
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

Node* insert(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val>root->data){
        root->right=insert(root->right,val);
    }
    else{
        root->left=insert(root->left,val);
    }
    return root;
}  

Node* search(Node* root, int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data==val){
        return root;
    }
    if(val>root->data){
        return search(root->right,val);
    }
    else{
        return search(root->left,val);
    }
    return root;
}

Node* inorderSuc(Node* root){
    Node *curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

Node*delet(Node* root, int val){
    if(key<root->data){
        root->left=delet(root->left,val);
    }
    else if(key>root->data){
        root->right=delet(root->right,val);
    }
    else{
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }
        Node* temp=inorderSuc(root->right);
        root->data=temp->data;
        root->right=delet(root->right,temp->data);

          
    }
    return root;

}

void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}

int main(){
    Node * root=NULL;
    root=insert(root,10);
    insert(root,4);
    // insert(root,1);
    // insert(root,3);
    // insert(root,2);
    inorder(root);
    if(search(root,7)!=NULL){
        insert(root,7);
    }
    else{
        cout<<"NOt FOund"<<endl;
    }
}