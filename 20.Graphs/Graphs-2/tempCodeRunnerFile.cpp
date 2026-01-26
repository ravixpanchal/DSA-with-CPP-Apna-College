void dfsHelper(int u,vector<bool>&vis)
    {
       vis[u]=true;
       cout<<u<<" ";

       list<int>neighbors=l[u];
       for(int v:neighbors)
       {
        if(!vis[v])
        {
         dfsHelper(v,vis);
        }
       }
    }

    void dfs()
    {
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfsHelper(i,vis);
                cout<<endl;
            }
        }
        
        cout<<endl;
    }
