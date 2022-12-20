#include<iostream>
using namespace std;
class List;
//user-defined class for node
class Node{
    int data;
    public:

    Node* next;  //this is of type node pointer
    
    
    //constructor
    Node(int d): data(d), next(NULL){}  //this type of before entering the constructor is called  initilization list
    // Node(int d){
    //     data=d;
    //     next=NULL;
    // } This type is called using assignment operator

    	friend class List; //list can access private members of node
};

//class for linked list
class list{
    Node* head;
    Node* tail;
    public:
    list(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int d){
        if(head==NULL){
            
            Node *n=new Node(d); //we allocate this in heap memory coz we want this to exist in memory even after function call destroys
            head=tail=n;
        }
        else{
            Node *n=new Node(d);
            n->next=head; //(*n).next=head;
            head=n;
        }
    }
    void push_back(int d){
        if(head==NULL){
            Node *n=new Node(d); //we allocate this in heap memory coz we want this to exist in memory even after function call destroys
            head=tail=n;
        }
        else{
            Node *n=new Node(d);
            tail->next=n;
            tail=n;
        }
    }
    
    
};
int main(){

}