#include<bits/stdc++.h>
using namespace std;
long long a[103][103],tst,n,m;
void fun()
{
    int dx[]= {0,0,1,-1};
    int dy[]= {1,-1,0,0};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            long long mx=-1;
            for(int k=0; k<4; k++)
            {
                int h=i+dx[k];
                int g=j+dy[k];
                if(h>=0&&h<n&&g>=0&&g<m)
                {
                    if(a[i][j]==a[h][g])
                    {
                        mx=max(mx,a[h][g]);
                        a[h][g]=mx+1;
                    }
                }
            }
        }
    }
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
        fun();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
