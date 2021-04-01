#include<bits/stdc++.h>
using namespace std;
int tst,a[100][100],n,m;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>a[i][j];
            }
        }
        int cnt=0;
        int f;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(a[i][j]==0)
                {
                    f=0;
                    for(int k=1;k<=m;k++)
                    {
                        if(a[i][k]!=0)
                        {
                            f=1;
                            break;
                        }
                    }
                    for(int k=1;k<=n;k++)
                    {
                        if(a[k][j]!=0)
                        {
                            f=1;
                            break;
                        }
                    }
                    if(f==0)
                    {
                        cnt++;
                        a[i][j]=1;
                    }
                }
            }
        }
        if(cnt%2==1)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;
    }
    return 0;
}
