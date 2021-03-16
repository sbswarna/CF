#include<bits/stdc++.h>
using namespace std;
int n,m,a[200][200],b[200][200],ors[200][200];
int o;
int main()
{
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            b[i][j]=1;
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]==0)
            {
                for(int x=0; x<n; x++)
                {
                    b[i][x]=0;
                }
                for(int x=0; x<m; x++)
                {
                    b[x][j]=0;
                }
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            o=0;
            //cout<<b[i][j]<<" ";
            for(int x=0; x<n; x++)
            {
                o=o|b[i][x];
            }
            for(int x=0; x<m; x++)
            {
                o=o|b[x][j];
            }
            ors[i][j]=o;
        }
        //cout<<endl;
    }
    int f=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            //cout<<ors[i][j]<<" ";
            if(ors[i][j]!=a[i][j])
            {
                f=1;
            }
        }
        //cout<<endl;
    }
    if(f==0)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<b[i][j];
                if(j!=n-1)
                    cout<<" ";
                else
                    cout<<endl;
            }
        }
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
