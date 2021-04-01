#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000004],cat[1000004],u,v;
map<int,int>mp;
int mark[1000004];
vector<int>graph[1000005];
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        mp[i]=0;
    }
    for(int i=1; i<n; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
        mp[u]++;
        mp[v]++;
    }
    queue<int>q;
    q.push(1);
    if(a[1]==1)
        cat[1]=1;
    else
        cat[1]=0;
    int cnt=0;
    while(!q.empty())
    {
        int x=q.front();
        if(a[x]==1)
        {
            if(cat[x]==0)
                cat[x]=1;
        }
        q.pop();
        for(int i=0; i<graph[x].size(); i++)
        {
            if(mark[graph[x][i]]==0)
            {
                if(a[graph[x][i]]==1)
                {
                    cat[graph[x][i]]=cat[x]+1;
                }
                else
                {
                    cat[graph[x][i]]=0;
                }
                if(cat[graph[x][i]]<=m)
                {
                    mark[graph[x][i]]=1;
                    q.push(graph[x][i]);
                }
                else
                    mark[graph[x][i]]=2;
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(mp[i]==1)
            if(mark[i]==1)
                cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
