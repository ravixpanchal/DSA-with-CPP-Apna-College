#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int>*l;

    public:

    Graph(int V)
    {
        this->V=V;
        l=new list<int>[V];
    }

    void addEdge(int u,int v)
    {
        l[u].push_back(v);
         l[v].push_back(u);

    }

    void print()
    {
        for(int u=0;u<V;u++)
        {
            list<int>neighbors=l[u];
            cout<<u<<" : ";
        for(int v: neighbors)
        {
           cout<<v<<" ";
        }
        cout<<endl;
        }

    }

    void dfs(int u,vector<bool>&vis)
    {
       vis[u]=true;
       cout<<u<<" ";

       list<int>neighbors=l[u];
       for(int v:neighbors)
       {
        if(!vis[v])
        {
         dfs(v,vis);
        }
       }
    }

};

int main ()
{

Graph graph(5);
graph.addEdge(0,1);
graph.addEdge(1,2);
graph.addEdge(1,3);
graph.addEdge(3,2);
graph.addEdge(2,4);

vector<bool>vis(7,false);
graph.dfs(0,vis);
// graph.print();
return 0;
}