#include<queue> //to use heap include header file queue
#include<iostream>
using namespace std;

class Compare{
public:
    bool operator()(int a, int b){ //opearator overloading
        return a>b;
    }
};
int main(){
    priority_queue<int> heap; //by default its a max_heap

    
    //Output: 98 43 17 15 10 6

    //To make a min heap
    priority_queue<int, vector<int> , greater<int>> heap2; //add 2 more parameters(here greater<int> is inbuilt comparator)
    
    priority_queue<int, vector<int> , Compare> heap4;
                //Output: //OUTPUT:6 10 15 17 43 98
    int arr[]={10,15, 43, 98, 6, 17};
    for(int x: arr) {
        heap2.push(x);
    }
    while (!heap2.empty())
    {
        cout<<heap2.top()<<" ";
        heap2.pop();
    }


}