#include<bits/stdc++.h>
using namespace std;
int nodes,edges,cost[160][160],u,v,c;
vector<int>graph[160];
int spfa(int start,int ed)
{
    int ispresent[160];
    int dis[160],cnt[160]= {0};
    memset(ispresent,-1,sizeof(ispresent));
    for(int i=0; i<=nodes; i++)
    {
        dis[i]=9999999;
    }
    queue<int>q;
    q.push(start);
    ispresent[start]=1;
    dis[start]=0;
    while(!q.empty())
    {
        start=q.front();
        q.pop();
        ispresent[start]=-1;
        for(int i=0; i<graph[start].size(); i++)
        {
            int x=graph[start][i];
            if(dis[x]>dis[start]+cost[start][x])
            {
                dis[x]=dis[start]+cost[start][x];
                if(ispresent[x]==-1)
                {
                    q.push(x);
                    ispresent[x]=1;
                    cnt[x]++;
                    if (cnt[x]>=nodes)
                        return -1;
                }
            }
        }
    }
    return dis[ed];
}
int main()
{
    int query;
    while(cin>>nodes>>edges>>query)
    {
        if(nodes==0&&edges==0&&query==0)
            break;
        else
        {
            for(int i=0; i<edges; i++)
            {
                cin>>u>>v>>c;
                graph[u].push_back(v);
                cost[u][v]=c;
            }
            for(int i=1; i<=query; i++)
            {
                cin>>u>>v;
                int x=spfa(u,v);
                if(x==-1)
                    cout<<"-Infinity"<<endl;
                else
                {
                    if(x==9999999)
                        cout<<"Impossible"<<endl;
                    else
                        cout<<x<<endl;
                }
            }
            cout<<endl;
        }
        for(int i=0;i<=nodes;i++)
            graph[i].clear();
        memset(cost,0,sizeof(cost));
    }
    return 0;
}
