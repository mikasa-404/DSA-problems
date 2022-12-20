#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};
void inorder(Node * root, vector<int> &tr){
    if(root==NULL)return;
        if(root->left)
        inorder(root->left, tr);
        tr.push_back(root->key);
        if(root->right)
        inorder(root->right, tr);
    
}

Node * modifier(Node * root){
    if(root==NULL)
        return NULL;

    if(root->left==NULL && root->right==NULL)
        return root;
    if(root->left)  root->left= modifier(root->left);
   if(root->right) root->right=modifier(root->right);
    //only left
    if(root->left!=NULL && root->right==NULL){
        return root->left;
    }
    //only right
    if(root->left==NULL && root->right!=NULL){
       return root->right;
    }
    return root;
}

vector<int> removeHalfNodes(Node *root)
{ 
    vector<int> tr;
    root= modifier(root);
    inorder(root, tr);
    return tr;
}