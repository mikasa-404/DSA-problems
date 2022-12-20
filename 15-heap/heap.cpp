#include<vector>
using namespace std;

class Heap{
    vector<int> v;
    public:
    Heap(int default_size=10){
        v.resize(default_size+1);
        v.push_back(-1);

    }
    void push(int data){
        v.push_back(data);
        int idx=v.size()-1;
        int parent=idx/2;
        while (idx>1 && v[parent]>v[idx]) //min heap//parent<=children
        {
            swap(v[parent], v[idx]);
            idx=parent;
            parent=idx/2;
        }
        
    }
    
};