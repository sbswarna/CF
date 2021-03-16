#include<bits/stdc++.h>
using namespace std;
int tst,n,k,a[105][105];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        if(k==0)
        {
            cout<<0<<endl;
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                    cout<<0;
                cout<<endl;
            }
        }
        else if(k<=n)
        {
            if(k==n)
                cout<<0<<endl;
            else
                cout<<2<<endl;
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i==j)
                    {
                        if(k>0)
                        {
                            cout<<1;
                            k--;
                        }
                        else
                        {
                            cout<<0;
                        }
                    }
                    else
                        cout<<0;
                }
                cout<<endl;
            }
        }
        else
        {
            memset(a,0,sizeof(a));
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(j==i)
                    {
                        a[i][j]=1;
                        k--;
                    }
                }
            }
            int p=1;
            while(k>0)
            {
                for(int i=1; i<=n; i++)
                {
                    if(k>0)
                    {
                        if(a[i][p]!=1)
                        {
                            a[i][p]=1;
                            k--;
                        }
                    }
                    else
                        break;
                }
                p++;
            }
            int sum1=0,sum2=0,mx1=-1,mx2=-1,mn1=99999999,mn2=999999999;
            for(int i=1;i<=n;i++)
            {
                sum1=0,sum2=0;
                for(int j=1;j<=n;j++)
                {
                    sum1+=a[i][j];
                    sum2+=a[j][i];
                }
                mx1=max(mx1,sum1);
                mx2=max(mx2,sum2);
                mn1=min(mn1,sum1);
                mn2=min(mn2,sum2);
            }
            cout<<((mx1-mn1)*(mx1-mn1))+((mx2-mn2)*(mx2-mn2))<<endl;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                    cout<<a[i][j];
                cout<<endl;
            }
        }
    }
    return 0;
}
