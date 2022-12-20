#include <bits/stdc++.h>
using namespace std;
 
struct TreeNode {
    int val;
    TreeNode* left, *right;
};
//flag=0;
void help(TreeNode* root, int ts, int cs, int &flag){
    if(root==NULL){
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
void help(TreeNode* root, int ts, int cs, vector<int> x, vector<vector<int>> &ans){
if(root==NULL)   return;
x.push_back(root->val);
cs+=root->val;
    if(cs==ts && root->left==NULL && root->right==NULL){
        ans.push_back(x);
        return;
    }
    help(root->left,ts,cs,x,ans);
    help(root->right,ts,cs,x,ans);

return;
}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> ans;
    vector<int>x;
    help(root, targetSum, 0, x, ans);
    return ans;
}
