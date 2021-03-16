#include<bits/stdc++.h>
using namespace std;
long long sx,sy,ex,ey,n,visited[15][15],i,j,p1,q1,m;
string s1,s2;
queue<long long>q;
vector<string>v1,v2;
int dy[]={0,0,1,-1,1,-1,-1,1};
int dx[]={-1,1,0,0,-1,1,-1,1};
string t[]={"0","0","R","L","R","L","L","R"};
string s[]={"D","U","0","0","D","U","D","U"};
int main()
{
    cin>>s1>>s2;
    sx=s1[1]-'0';
    sy=s1[0]-'a'+1;
    ex=s2[1]-'0';
    ey=s2[0]-'a'+1;
    //cout<<sx<<" "<<sy<<endl;
    memset(visited,-1,sizeof(visited));
    q.push(sx);
    q.push(sy);
    visited[sx][sy]=0;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int y=q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            int x1=x+dx[i];
            int y1=y+dy[i];
            if(x1>=1&&y1>=1&&x1<=8&&y1<=8)
            {
                if(visited[x1][y1]==-1)
                {
                    visited[x1][y1]=visited[x][y]+1;
                    q.push(x1);
                    q.push(y1);
                }
            }
        }
    }
//    cout<<visited[sx][sy]<<endl;
//    for(int i=1; i<=8; i++)
//    {
//        for(int j=1; j<=8; j++)
//            cout<<visited[i][j]<<" ";
//        cout<<endl;
//    }
    if(visited[ex][ey]>0)
    {
        cout<<visited[ex][ey]<<endl;
        long long ds=ex;
        long long de=ey;
        for(j=1; j; j++)
        {
            if(ds==sx&&de==sy)
            {
                break;
            }
            else
            {
                for(i=0; i<8; i++)
                {
                    if(ds-dx[i]>=1&&de-dy[i]>=1&&ds-dx[i]<=8&&de-dy[i]<=8)
                    {
                        if(visited[ds][de]-1==visited[ds-dx[i]][de-dy[i]])
                        {
                            ds=ds-dx[i];
                            de=de-dy[i];
                            v1.push_back(s[i]);
                            v2.push_back(t[i]);
                            break;
                        }
                    }
                }
            }
        }
        for(i=v1.size()-1; i>=0; i--)
        {
            if(v2[i]!="0")
                cout<<v2[i];
            if(v1[i]!="0")
                cout<<v1[i];
            if(i!=0)
                cout<<endl;
        }
    }
    else
        cout<<0<<endl;
    return 0;
}
