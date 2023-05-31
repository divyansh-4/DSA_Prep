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
int height(Node *node)
{
    if (node->left == NULL && node->right == NULL)
    {
        return 1;
    }
    if (node->right == NULL)
    {
        return 1 + height(node->left);
    }
    if (node->left == NULL)
    {
        return 1 + height(node->right);
    }
    return 1 + max(height(node->left), height(node->right));
}