#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    string key;
    Node* left, *right;
};

int evaluate(int op1, int op2, Node* root){
    if(root->key=="*")
        return op1*op2;     
    if(root->key=="+")
        return op1+op2;
    if(root->key=="-")
        return op1-op2;
    return op1/op2;
}
int evalTree(Node* root){
    if(!root)
    return 0;

    if(!root->left && !root->right)
    return stoi(root->key);

    int op1= evalTree(root->left);
    int op2= evalTree(root->right);
    return evaluate(op1, op2, root);

}