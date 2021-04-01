#include<bits/stdc++.h>
using namespace std;
int n,k,tst,a[200010],b[200010];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        for(int i=1; i<=n; i++)
        {
            a[i]=i;
        }
        int x=n-1,t;
        if((n+k)%2==0)
            t=n+k-1;
        else
            t=n+k;
        for(int i=n+1;i<=t;i++)
        {
            a[i]=x--;
        }
        if(n==1)
            cout<<a[1]<<endl;
        else
        {
            int in=1;
            for(int i=t; i>=1; i--)
            {
                b[in]=a[i];
                in++;
                k--;
                if(k<=0)
                    break;
            }
            for(int i=in-1; i>=1; i--)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
