#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

class Edge
{
public:
       int V;
       int wt;

       Edge(int V,int wt)
       {
        this->V=V;
        this->wt=wt;
       }
};


void bellmanFord(vector<vector<Edge>>graph,int V,int src)
{
//distance infinity
vector<int>dis(V,INT16_MAX);
dis[src]=0;

for(int i=0;i<V-1;i++)
{
    //uth Node
    for(int u=0;u<V;u++)
    {
       for(Edge e : graph[u])
       {
        if(dis[e.V]>dis[u]+e.wt)
        {
            dis[e.V]=dis[u]+e.wt;
        }
       }
    }
    
}
for(int i=0;i<V;i++)
    {
        cout<<dis[i]<<" ";
    }
    cout<<endl;

}

int main ()
{
    int V=6;
    vector<vector<Edge>>graph(V);
    graph[0].push_back(Edge(1,2));
    graph[0].push_back(Edge(2,4));

    graph[1].push_back(Edge(2,-4));
    graph[1].push_back(Edge(3,2));
  
    graph[2].push_back(Edge(4,4));
    graph[3].push_back(Edge(1,-1));
   
  
    
    
    bellmanFord(graph,V,0);





    return 0;
}