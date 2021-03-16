#include<bits/stdc++.h>
using namespace std;
string s[10];
int tst,mx,cnt,grid[10][2000],n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int cnt=0;
        cin>>s[0];
        s[1]=s[0];
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s[i][j]=='0')
                    grid[i][j]=0;
                else
                    grid[i][j]=1;
            }
        }
        int mx=-1,visited[10][2000];
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<s[i].size(); j++)
            {
                cnt=0;
                memset(visited,0,sizeof(visited));
                queue<int>q;
                q.push(i);
                q.push(j);
                visited[i][j]=-1;
                while(!q.empty())
                {
                    cnt++;
                    int x=q.front();
                    q.pop();
                    int y=q.front();
                    q.pop();
                    cout<<x<<" "<<y<<endl;
                    if(grid[x][y]==1)
                    {
                        if(visited[x+1][y]==0&&x+1>=0&&x+1<n&&y>=0&&y<n)
                        {
                            q.push(x+1);
                            q.push(y);
                            visited[x+1][y]=-1;
                        }
                        else if(visited[x-1][y]==0&&x-1>=0&&x-1<n&&y>=0&&y<n)
                        {
                            q.push(x-1);
                            q.push(y);
                            visited[x-1][y]=-1;
                        }
                        else if(visited[x][y+1]==0&&x>=0&&x<n&&y+1>=0&&y+1<n)
                        {
                            q.push(x);
                            q.push(y+1);
                            visited[x][y+1]=-1;
                        }
                        else if(visited[x][y-1]==0&&x>=0&&x<n&&y-1>=0&&y-1<n)
                        {
                            q.push(x);
                            q.push(y-1);
                            visited[x][y-1]=-1;
                        }
                    }
                    else if(grid[x][y]==0)
                    {
                        if(visited[x][y+1]==0&&x>=0&&x<n&&y+1>=0&&y+1<n)
                        {
                            q.push(x);
                            q.push(y+1);
                            visited[x][y+1]=-1;
                        }
                        else if(visited[x][y-1]==0&&x>=0&&x<n&&y-1>=0&&y-1<n)
                        {
                            q.push(x);
                            q.push(y-1);
                            visited[x][y-1]=-1;
                        }
                    }
                }
                mx=max(mx,cnt);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
