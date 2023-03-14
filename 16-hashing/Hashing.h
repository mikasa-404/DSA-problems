template <typename T>
class Node{
	public:
		string key;
		T value;
		Node * next;
    
    Node(string key, T value){
        this->key=key;
        this->value=value;
        next=NULL;
    }
};
template <typename T>
class Hashtable{
    Node <T>* *table;
    int cs;
    int ts;

    int HashFn(string key){
        int indx=0;
        int power=1;
        for(auto ch: key){
            indx = (indx+ xh*power)%ts;
            power=(power*29)%ts;
        }
        return indx;
    }

    public:
    Hashtable(int def_size=7){
        cs=0;
        ts=def_size;
        table= new Node <T> * [ts]; //array of pointers pointing to a Node <T> element
        for (int i = 0; i < ts; i++)
        {
            table[i]=NULL;
        }
    }
    

    //insertion function
    void insert(string key, T value){
        int idx = HashFn(key);

        Node <T> * n; //pointer to a node
        n=new Node <T> (key, value); //each bucket of hash table n, points to Node<T> element containing a key value pair
        n->next=table[idx];
        table[idx]=n;
        cs++;
        
        //REHASHING
        //load_factor
        float load_factor =cs/float(ts);
        if (load_factor>0.7)
        {
            rehash();
        }
        
    }

};