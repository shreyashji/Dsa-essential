#include<iostream>
#include<string>
using namespace std;
template <typename T>
class Node{
    //idealy we make this below as private members
    //can make getters and setters for that
    public: 
    string key;
    T value;
    Node * next;
    Node(string key, T value){
        this->key=key;
        this->value=value;
        next=NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};

template<typename T>
class HashTable{
    Node<T> ** table; //table pointer
    int cs; //total entries that have been inserted
    int ts; //size of table

    int Hashfn(string key){
        int idx=0;
		int power = 1;
        for(auto ch:key){
            idx=(idx+ch*power)%ts;
            power=(power*29)%ts;
        }
        return idx;
    }

    void rehash(){
        //save pointer to the old table and we will do insertion in the new table
        Node<T> **oldTable =table;
        int oldTs=ts;

        //increase the table size
        cs=0;
        ts=2*ts+1;
        table=new Node<T>*[ts];  //you should make it prime
        
        for(int i=0; i<ts; i++){
            table[i]=NULL;
        }
    
        //copy elements from old table to new table
        for(int i=0; i<oldTs; i++){
            Node<T> *temp= oldTable[i];
            while(temp!=NULL){
                string key=temp->key;
                T value =temp->value;
                //happens in the new table;
                insert(key,value);
                temp=temp->next;
            }
            //destroy ith  entire ll
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
        }
        delete [] oldTable;  

    }

public:
//CONSTRUCTOR HASHTABLE
    HashTable(int default_size=7){
        cs=0;
        ts=default_size;

        table=new Node<T>*[ts]; //table size
        
        for(int i=0; i<ts; i++){
            table[i]=NULL; 
        }
    }
    void insert(string key,T val){
        //next
        int idx=Hashfn(key);
        Node<T>*n =new Node<T>(key,val);

        //insertion at head of the linked list
        n->next=table[idx];  //O(N)
        table[idx]=n; //O(N)

        cs++;

        float load_factor=cs/float(ts);
        if(load_factor > 0.7){
            rehash();
        }
    }

    T* search(string key){
        int idx= Hashfn(key);
        Node <T> *temp =table[idx];
        while(temp!=NULL){
            if(temp->key ==key){
                return &temp->value;
            }
            temp =temp->next;
        }
        return NULL;
    }

    T& operator[](string key){
       //return the value
       //if key is not found then create a new node
       //and return the existing node
    T* valueFound=search(key);
    if(valueFound==NULL){
        T object;
        insert(key,object);
        valueFound=search(key);
    }
    return *valueFound;
   }

    void print(){
        //iterate over  the bucket
        for(int i=0; i<ts; i++){
            cout<<"Bucket "<<i<<"->";
            Node<T> *temp =table[i];
            while(temp!=NULL){
                cout<<temp->key <<"->";
                temp= temp->next;
            }
            cout<<endl;
        }
    }

};

//property loadfactor = cs/ts =4/5=0.8 rehash we double the capacity of table
/// 