/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;
 
struct TreeNode {
    int val;
    TreeNode* left, *right;
};
class Solution {       

public:
  bool help(TreeNode* root, long maxx, long minn){
    if(root==NULL)
    return true;
    
    if(root->val>=maxx || root->val<=minn){
    return false;
    }
    return (help(root->left, root->val, minn) && help(root->right, maxx, root->val));
}
    bool isValidBST(TreeNode* root) {
       return help(root, LONG_MAX, LONG_MIN);
    }
};