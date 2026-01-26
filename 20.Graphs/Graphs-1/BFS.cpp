#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
     int V;
     list<int>*l;//list of int ka starting pointer/ different different list of integers
    // same as int *arr

public:
     Graph(int V){
        this->V=V;
        l=new list<int>[V];
        //same as arr=new int[v]

     }

     void addEdge(int u,int v){//edge u->v
         l[u].push_back(v);
         l[v].push_back(u);
     }


     void print(){
        for(int u=0;u<V;u++){
            list<int>neighbors=l[u];
            cout<<u<<" : ";
            for(int v:neighbors){
                cout<<v<<" ";
            }
            cout<<endl;
        }
     }

void bfsHelper(int st,vector<bool>&vis)
    {
     queue<int>q;
     q.push(st);
     vis[st]=true;

     while(!q.empty())
     {
      int curr=q.front();
      q.pop();
      cout<<curr<<" ";

      list<int>neighbors=l[curr];
      for(int v:neighbors)
      {
        if(!vis[v])
        {
          vis[v]=true;
          q.push(v);
        }
      }
     }
     cout<<endl;
    }

    void bfs()
    {
       vector<bool>vis(V,false);
       for(int i=0;i<V;i++)
       {
        if(!vis[i])
        {
          bfsHelper(i,vis);
          cout<<endl;
        }
       }
    }

    


};

int main (){
    Graph graph(5);
    //undirected Graph 
    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(3,2);
    graph.addEdge(2,4);

    graph.print();




    return 0;
}













