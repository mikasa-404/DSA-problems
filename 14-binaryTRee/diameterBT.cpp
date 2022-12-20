#include<iostream>
#include<vector>
using namespace std;
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
};
 //approach 1
class Solution {
public:
int height(TreeNode* root){
    if(root==NULL)
    return 0;
    int h1=height(root->left);
    int h2=height(root->right);

    return max(h1,h2)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int d1=height(root->left)+height(root->right);
        int d2=diameterOfBinaryTree(root->left);
        int d3=diameterOfBinaryTree(root->right);

        return max(d1, max(d2,d3));

    }
};
//optimised approach
class Solution2 {
public:

 pair<int, int> diameter(TreeNode* root) {
    pair<int, int> p;//first=height//second=height
        if(root==NULL){
            p.first=0;
            p.second=0;
            return p;
        }
        pair<int, int> left, right;
        left=diameter(root->left);
        right=diameter(root->right);

        p.first=max(left.first , right.first)+1;
        int d1=left.first + right.first;
        int d2=left.second;
        int d3=right.second;

        p.second=max(d1, max(d2,d3));
        return p;
    }
    int diameterOfBinaryTree(TreeNode* root) {
            pair<int, int> x = diameter(root);
            return (x.second);     
    }
};