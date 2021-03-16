#include<bits/stdc++.h>
using namespace std;
int parent[1000006],RANK[1000006],tst,n,m,k,l;
vector<int>graph[200];
void make_set(int v)
{
    parent[v] = v;
    RANK[v] = 0;
}
int find_parent(int u)
{
    if(parent[u]!=u)
        parent[u]=find_parent(parent[u]);
    return parent[u];
}
void union_sets(int u, int v)
{
    int pu = find_parent(u);
    int pv = find_parent(v);
    if (pu != pv)
    {
        if (RANK[pu] < RANK[pv])
            swap(pu, pv);
        parent[pu] = parent[pv];
        if (RANK[pu] == RANK[pv])
            RANK[pu]++;
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1; i<=m; i++)
        make_set(i);
        int cnt=0;
    for(int i=1; i<=n; i++)
    {
        cin>>k;
        if(k==0)
            cnt++;
        for(int j=1; j<=k; j++)
        {
            cin>>l;
            graph[l].push_back(i);
        }
    }
    /*for(int i=1; i<=m; i++)
    {
        cout<<"language= "<<i<<":";
        for(int j=0; j<graph[i].size(); j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }*/
    for(int i=1; i<=m; i++)
    {
        for(int j=0; j<graph[i].size(); j++)
        {
            for(int jj=1; jj<=m&&jj!=i; jj++)
            {
                for(int ii=0; ii<graph[jj].size(); ii++)
                {
                    if(graph[i][j]==graph[jj][ii])
                    {
                        //cout<<"language1= "<<i<<" language= "<<jj<<endl;
                        union_sets(i,jj);
                    }
                }
            }
        }
    }
    int cnt2=0;
    for(int i=1; i<=m; i++)
    {
        if(parent[i]==i&&graph[i].size()>0)
            cnt2++;
    }
    if(cnt2>0)
    cout<<cnt+(cnt2-1)<<endl;
    else
        cout<<cnt<<endl;
    return 0;
}
