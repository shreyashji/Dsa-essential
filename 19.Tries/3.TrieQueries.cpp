#include<iostream>
#include"2.Trie.h"
using namespace std;
//T(n)= O(L)
int  main(){
    string words[]={"hello","he","apple","aple","news"} //lenght L
    Trie t;
    
    for(auto word:words){
        t.insert(word);
    }
    string key;
    cin>>key;
    cout<<t.search(key)<<endl;


return 0;
}
