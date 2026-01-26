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


void dijkstra(int src,vector<vector<Edge>>graph,int V)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;  //min heap
    vector<int>dis(V,INT_FAST16_MAX);

    //push the src node to priority Queue
    pq.push(make_pair(0,src));
    dis[src]=0;


    //bfs
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();

        vector<Edge>edges=graph[u];
        for(Edge e: edges)//e.v,e.w
        {
            if(dis[e.V]>dis[u]+e.wt)
            {
                //edge Relaxation
               dis[e.V]=dis[u]+e.wt;
               pq.push(make_pair(dis[e.V],e.V));
            }
        }

    }

    for(int d: dis)
    {
        cout<<d<<" ";
    }
    cout<<endl;

}




int main ()
{
    int V=6;
    vector<vector<Edge>>graph(V);
    graph[0].push_back(Edge(1,2));
    graph[0].push_back(Edge(2,4));

    graph[1].push_back(Edge(2,1));
    graph[1].push_back(Edge(3,7));
  
    graph[2].push_back(Edge(4,3));
    graph[3].push_back(Edge(5,1));
   
    graph[4].push_back(Edge(3,2));
    graph[4].push_back(Edge(5,5));
    
    
    dijkstra(1,graph,V);





    return 0;
}