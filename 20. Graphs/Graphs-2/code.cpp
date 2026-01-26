#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<int>*l;

public:
Graph(int V){
    this->V=V;
    l=new list<int>[V];
}

void addEdge(int u,int v){
    l[u].push_back(v);
    l[v].push_back(u);
}

bool isDirCycle(int src,int parent,vector<bool>&vis){
    vis[src]=true;

    for(auto v: l[src]){
        if(!vis[v]){
            if(isDirCycle(v,src,vis)){
                return true;
            }else{
                if(v!=parent){
                    return true;
                }
            }
        }
    }
    return false;

}

bool isCycle(){
    vector<bool>vis(V,false);
    return isDirCycle(0,-1,vis);

}

};




int main(){
    int V=5;
    Graph graph(V);
    graph.addEdge(0,1);
    // graph.addEdge(0,2);
    graph.addEdge(0,3);
    graph.addEdge(1,2);
    graph.addEdge(3,4);
    cout<<graph.isCycle();



    return 0;
}