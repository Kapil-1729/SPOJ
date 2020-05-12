#include<bits/stdc++.h>
using namespace std;
void dfs(int s, vector<int> g[], bool vis[])
{
    vis[s]=true;
    for(int i=0;i<g[s].size();i++)
    {
        if(vis[g[s][i]]!=true)
        {
            dfs(g[s][i],g,vis);
        }
    }
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N, E;
        int result=0;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
		
		for (int i=0;i<N;i++)
		{
			if(vis[i]!=true)
			{
				result+=1;
				dfs(i,g,vis);
			}
		}
    cout<<result<<endl;
    }
} 
