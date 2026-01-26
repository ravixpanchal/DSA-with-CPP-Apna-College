#include<iostream>
#include<vector>
#include<list>
#include<queue>
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

    

    bool hasPathHelper(int src,int dest,vector<bool>&vis)
    {
      //base case
      if(src==dest)
      {
        return true;
      }

      vis[src]=true;
      list<int>neighbors=l[src];

      for(int v: neighbors)
      {
        if(!vis[v])
        {
           if (hasPathHelper(v,dest,vis))
           {
            return true;
           }
        }
      }
      return false;
    }

    
    bool hasPath(int src,int dest)
    {
        vector<bool>vis(V,false);
       return  hasPathHelper(src,dest,vis);
    }
};

int main ()
{

Graph graph(7);
graph.addEdge(0,1);
graph.addEdge(0,2);
graph.addEdge(1,3);
graph.addEdge(2,4);
graph.addEdge(3,4);
graph.addEdge(3,5);
graph.addEdge(4,5);
graph.addEdge(5,6);

cout<<graph.hasPath(0,5)<<endl;
return 0;
}