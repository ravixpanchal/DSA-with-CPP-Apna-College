#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;

class Graph
{
    
    int V;
    list<pair<int,int>>*l;
    bool isUndir;

    public:

    Graph(int V,bool isUndir=true)
    {
        this->V=V;
        l=new list<pair<int,int>>[V];
        this->isUndir=isUndir;
    }
    
    void addEdge(int u,int v,int wt)
    {
        l[u].push_back(make_pair(v,wt));
        if(isUndir)
        {
            l[v].push_back(make_pair(u,wt));
        }
    }


    void primAlgo(int src)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq; 
        vector<bool>mstSet(V,false);
        pq.push(make_pair(0,src));

        int ans=0;

        while(!pq.empty())  //(wt,v)->minheap
        {
            int u=pq.top().second;
            int wt=pq.top().first;
            pq.pop();

            if(!mstSet[u])
            {
              mstSet[u]=true;
              ans+=wt;
              list<pair<int,int>>neighbors=l[u];
              for(pair<int,int>n:neighbors)
              {
                int v=n.first;
                int currWt=n.second;

                pq.push(make_pair(currWt,v));
              }
            }

        }
        cout<<"final cost of BST= "<<ans<<endl;
      

    }

};






int main()
{
    Graph graph(5,false);
    //prim's Graph
    graph.addEdge(0,1,10);
    graph.addEdge(0,2,15);
    graph.addEdge(0,3,30);
    graph.addEdge(1,3,40);
    graph.addEdge(3,2,50);

    graph.primAlgo(0);
    return 0;
}