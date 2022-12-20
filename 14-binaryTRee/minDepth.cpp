#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
  };
//take an empty queue
//insert root node in it
//level =0
//while queue is not empty
    //level++
    //each time size = size of queue 
    // while (size--)
        
        //  current=q.front();
        //pop 
        //if left and right child of temp are null then print level
        //else insert both children
        
class Solution {
public:
    int minDepth(TreeNode* root) {
         int level=0;
    queue<TreeNode *> q;   
         if(root==NULL)
            return level;   
         q.push(root);
                  while (!q.empty())
         {
            /* code */
            level++;
            int size=q.size();
            while (size--)
            {
              TreeNode* temp=q.front();
              q.pop();
              if(!temp->left && !temp->right)
              return level;
              if(temp->left)
              q.push(temp->left);
              if(temp->right)
              q.push(temp->right);
            }
         }
           return level;
    }
};