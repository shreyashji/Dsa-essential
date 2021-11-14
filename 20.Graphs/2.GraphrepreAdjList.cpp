#include<iostream>
#include<list>
using namespace std;
/*
0-> (1,4)
1->(0,2)
2->(3,1)
3->(5,4,2)
4->(0,3,5)
5->(3,4)
*/
class Graph{
    int V;
    list<int> *l;
public:
    Graph(int v){
        V=v;
        l=new list<int> [V];
    }

    void addEdge(int i,int j, bool undir=true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    void printAdjlist(){
        //iterate over all the rows
        for(int i=0; i<V; i++){
            cout<<i<<"-->";
            //every elemnt of ith linked list
            for(auto node:l[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.printAdjlist();
    return 0;
}