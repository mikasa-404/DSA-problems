//cnsider a queue and push root in it
//cuurent level, cl=0;
//while q is non - empty
    //size= size of current level
    //while size is >0
        //if this is the level required print all elements else push its children 
        //pop elt after step
    //cl++

#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int key;
    Node* left, *right;
};

vector<int> printKthLevel(Node* root, int k){
    // your code goes here
    int i=0;//cuurent level
    queue<Node*> q;
    vector<int>ans;
    int flag=0;
    q.push(root);
    while (!q.empty())
    {
        int size=q.size();
        while(size--){
            Node * temp=q.front();
            q.pop();
            if(i==k){
                ans.push_back(temp->key);
                flag=1;
            }
            else{
                if(temp->left)
                q.push(temp->left);                  
                if(temp->right)
               q.push(temp->right);

            }
            
        }   
        i++;
        if(flag==1)
        break;
    }
    return ans;
 
    
   
}