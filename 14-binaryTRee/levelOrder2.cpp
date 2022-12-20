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
#include<vector>
using namespace std;
class Solution {
public:
vector<vector<int>> ans;

    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)
        return ans;
    queue <TreeNode *> q;
vector<int> x;
q.push(root);
q.push(NULL);
while (!q.empty())
{
    TreeNode * temp=q.front();
            q.pop();


    if(temp==NULL){
        //cout<<endl;
        ans.push_back(x);
        x.clear();

        if(!q.empty())
        q.push(NULL);
    }
    else{
        x.push_back(temp->val);
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    
}
return ans ;
}

};