#include<bits/stdc++.h>
using namespace std;
int tst,n,m,vis[100][100];
char a[100][100];
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
queue<int>q;
int s2(int x,int y)
{
    q.push(x);
    q.push(y);
    memset(vis,-1,sizeof(vis));
    vis[x][y]=0;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            int g=x+dx[i];
            int h=y+dy[i];
            if(g>=0&&g<n&&h>=0&&h<m&&a[g][h]!='#'&&a[g][h]!='B')
            {
                if(vis[g][h]==-1)
                {
                    a[g][h]='#';
                    vis[g][h]=vis[x][y]+1;
                    q.push(g);
                    q.push(h);
                }
            }
        }
    }
    return vis[n-1][m-1];
}
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        int f=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]=='B')
                {
                    if(i+1>=0&&i+1<n)
                    {
                        if(a[i+1][j]!='G'&&a[i+1][j]!='B')
                            a[i+1][j]='#';
                        else
                        {
                            if(a[i+1][j]=='G')
                                f=1;
                        }
                    }
                    if(i-1>=0&&i-1<n)
                    {
                        if(a[i-1][j]!='G'&&a[i-1][j]!='B')
                            a[i-1][j]='#';
                        else
                        {
                            if(a[i-1][j]=='G')
                                f=1;
                        }
                    }
                    if(j+1>=0&&j+1<m)
                    {
                        if(a[i][j+1]!='G'&&a[i][j+1]!='B')
                            a[i][j+1]='#';
                        else
                        {
                            if(a[i][j+1]=='G')
                            {
                                f=1;
                            }
                        }
                    }
                    if(j-1>=0&&j-1<m)
                    {
                        if(a[i][j-1]!='G'&&a[i][j-1]!='B')
                            a[i][j-1]='#';
                        else
                        {
                            if(a[i][j-1]=='G')
                                f=1;
                        }
                    }
                }
            }
        }
        int cnt1=0,cnt2=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]=='G')
                {
                    cnt2++;
                    int p=s2(i,j);
                    if(p!=-1)
                        cnt1++;
                }
            }
        }
        if(f==0)
        {
            if(cnt1==cnt2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
/*
2 2
BG
#.
*/
