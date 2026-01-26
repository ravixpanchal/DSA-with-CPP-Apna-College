#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;


class Graph{
   int V;
   list<int>*l;
   bool isUndir;

public:
   Graph(int V,bool isUndir=true){
    this->V=V;
    l=new list<int>[V];
    this->isUndir=isUndir;
   }

   void addEdge(int u,int v)
   {
    l[u].push_back(v);
    if(isUndir)
    {
        l[v].push_back(u);
    }
   }

   void topoSortHelper(int src,vector<bool>&vis,stack<int>&s){
    vis[src]=true;

   list<int>neighbors=l[src];

   for(int v: neighbors)
   {
    if(!vis[v])
    {
        topoSortHelper(v,vis,s);
    }
   }
   s.push(src);

   }

   void topoSort()
   {
    vector<bool>vis(V,false);
    stack<int>s;

    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            topoSortHelper(i,vis,s);
        }
    }
    //print Topological Order
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

   }

   bool isCycle(int src,vector<bool>&vis,vector<bool>&recPath,vector<vector<int>>&graph)
   {
     vis[src]=true;
     recPath[src]=true;

    for(int i=0;i<graph.size();i++)
    {
        int u=graph[i][1];
        int v=graph[i][0];
        if(u==src)
        {
            if(!vis[v])
            {
                if(isCycle(v,vis,recPath,graph))
                {
                    return true;
                }
            }
            else{
                if(recPath[v])
                {
                    return true;
                }
            }
        }
    }
    recPath[src]=false;
    return false;
   }

   bool canFinish(int numCourse,vector<vector<int>>&graph)
   {
    int V=numCourse;
    vector<bool>vis(V,false);
    vector<bool>recPath(V,false);

    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            if(isCycle(i,vis,recPath,graph))
            {
                return false;
            }
        }
    }
    return true;
   }

   //........................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................

};


int main ()
{
    Graph graph(6,false);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,1);
    graph.addEdge(5,0);
    graph.addEdge(5,2);

//    graph.topoSort();


    return 0;
}