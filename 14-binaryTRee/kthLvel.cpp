#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

vector<int> printKthLevel(Node* root, int k){
    // your code goes here
    int i=0;
    queue<Node*> q;
    vector<int>ans;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node* temp= q.front();
        if(temp==NULL){
            q.pop();
            i++;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            if(i==k)
            ans.push_back(temp->key);

            q.pop();
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);

        }
        if(i>k)
            break;
    }
    return ans;
 
}