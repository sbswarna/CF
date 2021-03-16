#include<bits/stdc++.h>
using namespace std;
int tst,n,m,p,f[104],a[104],b[104],c[104];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m;
        memset(f,0,sizeof(f));
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        int fl=0;
        for(int i=1; i<=m; i++)
        {
            cin>>p;
            f[p]=1;
        }
        sort(b+1,b+n+1);
        int cnt,r=0;
        int it=1;
        while(it)
        {
            fl=0;
            for(int i=1; i<n; i++)
            {
                if(a[i]>a[i+1])
                {
                    if(f[i]==1)
                    {
                        swap(a[i],a[i+1]);
                    }
                }
            }
            cnt=0;
            for(int i=1; i<=n; i++)
            {
                if(a[i]!=b[i])
                {
                    fl=1;
                    break;
                }
            }
            if(fl==0)
            {
                cout<<"YES"<<endl;
                break;
            }
            it++;
            if(it>=10000)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}
