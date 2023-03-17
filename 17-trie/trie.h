#include<unordered_map>
#include<iostream>
using namespace std;

class Node{
    public:
    char data;
    unordered_map<char, Node*> m;
    bool isTerminal;

    Node(char d){
        data=d;
        isTerminal=false;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
        root=new Node('\0');
    }
    
    void insert(string word) {
        Node * temp= root;
        //you will check in hashtable do you have address of the letter
        for(char ch: word){
            if(temp->m.count(ch)==0) //not present in hashtable then insert
            {
                Node * n= new Node(ch); //add the new node with character ch
                temp->m[ch]=n; // and also insert the address of node in hashmap
            }
            temp=temp->m[ch]; //temp=temp->m[ch]
            //move temp to next node ->in both cases found or not found in hashtable
        }
        //when string finished mark as terminal
        temp->isTerminal=true;
    }
    
    bool search(string word) {
        Node * temp=root;
        for(char ch: word){
            //we will check if ch is present ih hashtable
            if(temp->m.count(ch)==0){
                return false; //not present in trie
            }
            //if present move to next node
            temp=temp->m[ch];
        }
        //after word ends, check for terminal
        //if it is terminal return true else return false
        return temp->isTerminal;
    }
    
    bool startsWith(string prefix) {
        Node * temp= root;
        for (char ch: prefix){
            if(temp->m.count(ch)==0){
                return false; //not present in trie
            }
            temp=temp->m[ch];
        }
        //if temp has a children return true else return false
        // if(temp->m.empty())
        //     return false;
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */