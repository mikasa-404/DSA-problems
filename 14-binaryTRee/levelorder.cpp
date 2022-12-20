#include<iostream>
#include<vector>
#include<queue>
using namespace std;
//Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
 /*Output :
1
2 3
4 5 6 
7*/
class Node{

public:
	int data;
	Node * left;
	Node * right;

	Node(int d){
		data = d;
		left = right = NULL;
	}
};
//Preorder Build of the Tree Root, Left, Right Tree
Node* buildTree(){

	int d;
	cin>>d;

	if(d==-1){
		return NULL;
	}

	Node* n = new Node(d);
	n->left = buildTree();
	n->right = buildTree();
	return n;
}

void levelOrder(Node * root){
queue <Node *> q;
q.push(root);
q.push(NULL);
while (!q.empty())
{
    if(q.empty())
    return;

    Node * temp=q.front();

    if(temp==NULL){
        cout<<endl;
        q.pop();

        if(!q.empty())
        q.push(NULL);
    }
    else{
        cout<<temp->data;
        q.pop();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    
}
return ;
}


int main(){

	Node * root = buildTree();
    cout<<endl;
	levelOrder(root);
	return 0;
}

