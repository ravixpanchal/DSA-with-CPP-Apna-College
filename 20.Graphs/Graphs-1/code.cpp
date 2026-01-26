#include<iostream>
#include<list>
#include<vector>
#include<queue>
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

void print(){
    for(int u=0;u<V;u++){
        cout<<u<<": ";
        list<int>neighbours=l[u];
        for(auto i: neighbours){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}

void bfsHelper(int st,vector<bool>&vis){
    queue<int>q;
    q.push(st);
    vis[st]=true;

    while(!q.empty()){
        int u=q.front();
        q.pop();
    cout<<u<<" ";
    list<int>neighbours=l[u];
    for(auto v: neighbours){
        if(!vis[v]){
            vis[v]=true;
            q.push(v);
        }
    }
    }
    cout<<endl;
}

void BFS(){
    vector<bool>vis(V,false);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            bfsHelper(i,vis);
            cout<<endl;
        }
    }
}

void dfsHelper(int src,vector<bool>&vis){
    vis[src]=true;
    cout<<src<<" ";
    list<int>neighbours=l[src];
    for(int v: neighbours){
        if(!vis[v]){
            dfsHelper(v,vis);
        }
    }
}
};

int main(){
    Graph graph(5);
    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(3,2);
    graph.addEdge(2,4);
    vector<bool>vis(5,false);
    graph.dfsHelper(0,vis);





    return 0;
}