/*
topo sort for DAG IS A LINEAR ORDERING OF VERTICES SUCH THAT
for every directed edge u,v, VERTEX u comes before v in the ordering.
topo sort for a graph is not possible if the graph is ot a dag

not dag = 1->2->3->1
dag = 1->2->3 another from 1->3 & 1->2
*/

#include<bits/stdc++.h>
#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<int> *l;
public:
    Graph(int v){
        V=v;
        l= new list<int>[V];
    }

    void addEdge(int x,inty){
        l[x].push_back(y);
    }

    void topological_sort(int source){
        vector<int> indegree(V,0);

        //iterate over all the edges to find the right indegree
        for(int i=0; i<V; i++){
            for(auto nbr:l[i]){
                indegree[nbr]++;
            }
        }
        queue<int> q;
        //init q with nodes having 0 indegree
        for(int i=0; i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        //start poping nodes
        while(!q.empty()){
            int node=q.front();
            cout<<node<<" ";
            q.pop();
            //iterate over the neighbours of this node and reduce
            //their indegree by 1
            for(auto nbr:l[node]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }
    }    
};
    
int main() {
	Graph g(6);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.topological_sort();

return 0;
}

