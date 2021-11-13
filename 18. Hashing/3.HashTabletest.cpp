#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include "2.Hashingcoode.h"
using namespace std;

int main(){

    HashTable<int> h;
    h.insert("mango",100);
    h.insert("apple",120);
    h.insert("banana",140);
    h.insert("orange",200);
    h.insert("kiwi",210);
    h.insert("pappaya",220);
    h.insert("litchi",30);

    h.print();

    string fruit;
    cout<<"enter fruit name : "<<endl;
    cin>>fruit;
   int *price =h.search(fruit);
   if(price!=NULL){
       cout<<"price of fruit is "<< *price<<endl;
   }
   else{
       cout<<"fruit not found"<<endl;
   }

    h["newFruit"]=200;
    cout<<"New fruit cost : "<<h["newFruit"]<<endl;
    h["newFruit"]+=20;
    cout<<"New fruit updated cost : "<<h["newFruit"]<<endl;


    return 0;
}