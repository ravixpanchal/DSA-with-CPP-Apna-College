#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int>*l;
    bool isUndir;
    public:

    Graph(int V,bool isUndir=true)
    {
        this->V=V;
        this->isUndir=isUndir;
        l=new list<int>[V];
    }

    void addEdge(int u,int v)
    {
        l[u].push_back(v);
        if(isUndir)
        {
         l[v].push_back(u);
        }
        

    }

    bool isDirCycHelper(int src,vector<bool>&vis,vector<bool>&recPath)
    {
        vis[src]=true;
        recPath[src]=true;
        list<int>neighbors=l[src];

        for(int v:neighbors)
        {
            if(!vis[v])
            {
               if(isDirCycHelper(v,vis,recPath)) 
               {
                return true;
               }
            }
            else {
                if(recPath[v])
            {
                return true;
            } 
                }
        }
        recPath[src]=false;
        return false;
    }

   bool isDirCyc()
   {
    vector<bool>vis(V,false);
    vector<bool>recPath(V,false);
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
          if(isDirCycHelper(i,vis,recPath))
          {
            return true;
          }
        }
    }
    return false;
   }
};

int main ()
{

Graph graph(4,false);
graph.addEdge(0,1);
graph.addEdge(0,2);
graph.addEdge(2,3);
graph.addEdge(3,0);


cout<<graph.isDirCyc()<<endl;


// graph.print();
return 0;
}