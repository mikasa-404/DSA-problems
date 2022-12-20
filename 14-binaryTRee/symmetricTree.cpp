#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};
bool help(Node * root1, Node *root2){
    if(root1==NULL && root2==NULL )
    return true;
    if(root1 && root2 && root1->key==root2->key)
        return help(root1->left, root2->right)&& help(root1->right, root2->left);
        
    return false;
}
bool isSymmetric(Node* root) {
        //your code goes here
        
        return help(root, root);
        
}