#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};
int sum=0;
int sumBT(Node* root)
{
    if(root==NULL)
    return 0;
    
    sum= root->key+ sumBT(root->left)+ sumBT(root->right);
    return sum;
}