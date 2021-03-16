#include<bits/stdc++.h>
using namespace std;
vector<int>graph[200050];
int n,visited[200050]={0},cnt=0,vis[200050];
queue<int>q;
string s[200005];
int main()
{
    cin>>n;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        for(int j=0;j<s[i].size();j++)
        {
            graph[i+27].push_back(s[i][j]-'a'+1);
            graph[s[i][j]-'a'+1].push_back(i+27);
            //mx=max(max(mx,i),s[i][j]-'a'+1);
            vis[s[i][j]-'a'+1]=1;
        }
    }
    for(int i=1;i<=26;i++)
    {
        if(visited[i]==0&&vis[i]==1)
        {
            cnt++;
            visited[i]=1;
            q.push(i);
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
                for(int j=0;j<graph[x].size();j++)
                {
                    if(visited[graph[x][j]]==0)
                    {
                        visited[graph[x][j]]=1;
                        q.push(graph[x][j]);
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
