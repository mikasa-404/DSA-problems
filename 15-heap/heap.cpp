#include<vector>
using namespace std;

class Heap{
    vector<int> v;

    //O(logn) delete and insert both
    
    void heapify(int i){ //heapify for min heap
        int left=2*i;
        int right=(2*i)+1;
        if(i<v.size())
        {
            int minidx= left>right ? right : left;
            if(v[i]>v[minidx]){
                swap(v[i], v[minidx]);
                 heapify(v[minidx]);
            }
            else 
            return;
        }
        
        // if(left<v.size() && v[left]<v[minIdx])
        //     minIdx=left;
        // if(right<v.size() && v[right]<v[minIdx])
        //     minIdx=right;
        // if(minIdx!=i){
        //     swap(v[i], v[minIdx]);
        //     heapify(minIdx);
        // }
    }

    public:
    Heap(int default_size=10){
        v.resize(default_size+1);
        v.push_back(-1);

    }
    //push data in min heap
    void push(int data){
        v.push_back(data);
        int idx=v.size()-1;
        int parent=idx/2;
        while (idx>1)
        ////parent<=children
        {
            if(v[parent]>v[idx]){
             swap(v[parent], v[idx]);
            idx=parent;
            parent=idx/2;
            }
            else 
            return;
        }
        
    }
    //return min elemnent
    int top(){
        return v[1]; //first element is the min elt of heap
    }
    //remove min element
    void pop(){
        swap(v[1], v[v.size()-1]);
        v.pop_back();
        heapify(1);//balance the heap starting from top
    }

    bool empty(){
        if(v.size()==1)
        return true;
        return false;
    }
    
};