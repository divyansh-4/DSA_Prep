#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(){
	    left = right = NULL;
	}
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}


void insertAtTail(Node* &head, int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    temp->right=n;
    n->left=temp;
}

   
void inorder(Node* root,Node* &head){
    if(root!=NULL){
        inorder(root->left,head);
        insertAtTail(head,root->data);
        inorder(root->right,head);
    }
}
void conv(Node* root, Node* &prev, Node* &head) {
    if (root != NULL) {
        conv(root->left, prev, head);

        if (prev == NULL) {
            head = root;
        } else {
            root->left = prev;
            prev->right = root;
        }
        
        prev = root;
        
        conv(root->right, prev, head);
    }
}

Node* bToDLL(Node* root) {
    Node* prev = NULL;
    Node* head = NULL;

    conv(root, prev, head);

    if (head != NULL) {
        while (head->left != NULL) {
            head = head->left;
        }
    }

    return head;
}