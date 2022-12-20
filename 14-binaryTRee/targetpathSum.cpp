#include <bits/stdc++.h>
using namespace std;
 
struct TreeNode {
    int val;
    TreeNode* left, *right;
};
//flag=0;
void help(TreeNode* root, int ts, int cs, int &flag){
    if(root==NULL){
        return;
    }
    cs+=root->val;
    if(cs==ts && root->left==NULL && root->right==NULL){
        flag=1;
        return;
    }
    help(root->left, ts, cs, flag);
        help(root->right, ts, cs, flag);
    return;
}
 bool hasPathSum(TreeNode* root, int targetSum) {
    int flag=0;
    help(root, targetSum, 0, flag);
    return flag;
}
// vector<vector<int>> pathSum(Node* root, int targetSum){
//     // your code goes here
//     vector<vector<int>> ans;
//     vector<int>x;
//     help(root, targetSum, 0, x, ans);
//     return ans;

// }