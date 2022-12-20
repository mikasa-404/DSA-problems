//push root in queue 
//while  q is not empty
//read two numbers every time from given input
    //if not -1 add them to left and right of root and push in q
    //if -1 nothing skip child
//pop from queue 
//move to next element of queue
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
Node* levelOrderBuild(){
    int d;
    cin>>d;
    Node* root=new Node(d);
    queue<Node *>q;
    q.push(root);
    
    while (!q.empty())
    {
        Node * current=q.front();
        int c1,c2;
        cin>>c1>>c2;
        if(c1!=-1)
        {
            current->left = new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1)
        {
            current->right = new Node(c2);
            q.push(current->right);
        }
        q.pop();
    }
   return root; 
}


int main(){
	return 0;
}

