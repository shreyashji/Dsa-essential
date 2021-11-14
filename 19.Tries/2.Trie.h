#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

class Trie;
class Node{
    char data;
    unordered_map<char,Node*> m;
    bool isTerminal;   //node is terminal or not

public:
    Node(char d){
        data =d;
        isTerminal=false;
    }    
    friend class Trie;
};

class Trie{
    Node*root;
public:
    Trie(){
        root =new Node('\0');
    }
    //insertion
    void insert(string word){
        Node* temp = root;

        for(char ch:word){
            if(temp->m.count(ch)==0){ //value not present
                Node*n=new Node(ch);
                temp->m[ch]=n;
            }
            temp=temp->m[ch]; //move to next node
        }
        temp->isTerminal=true; //string is ending at this node so terminal
    }

    //searching
    bool search(string word){
        Node* temp = root;
        for(char ch:word){
            if(temp->m.count(ch)==0){
                return false;
            }
            temp=temp->m[ch];
        }
    return temp->isTerminal;
    }

};