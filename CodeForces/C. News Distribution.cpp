#include<bits/stdc++.h>
using namespace std;
long long n,m,k,u[500005],i,j;
vector<long long>graph[500005];
long long visited[500005];
int main()
{
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>k;
        for(j=0; j<k; j++)
        {
            cin>>u[j];
            for(long long s=0;s<k;s++)
            {
                for(long long t=s+1;t<k;t++)
                {
                    graph[u[t]].push_back(u[s]);
                    graph[u[s]].push_back(u[t]);
                }
            }
        }
    }
    queue<long long>q;

    for(i=0; i<n; i++)
    {
        q.push(i);
        memset(visited,0,sizeof(visited));
        long long cnt=0;
        visited[i]=1;
        while(!q.empty())
        {
            long long x=q.front();
            q.pop();
            for(j=0; j<graph[x].size(); j++)
            {
                if(visited[graph[x][j]]!=1)
                {
                    q.push(graph[x][j]);
                    visited[graph[x][j]]=1;
                    cnt++;
                }
            }
        }
        cout<<cnt+1<<endl;
    }
    return 0;
}
