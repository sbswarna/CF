#include<bits/stdc++.h>
using namespace std;
map<long long,long long>mp[1000006];
long long tst,n,u,v,a[105];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>u>>v;
        for(long long i=1; i<=n; i++)
        {
            cin>>a[i];
            mp[i][a[i]]=1;
        }
        long long f=0,sum=0;
        for(long long i=2; i<=n; i++)
        {
            if(a[i]-a[i-1]==1)
            {
                sum=min(u,v);
            }
            else if(a[i]-a[i-1]==-1)
            {
                sum=min(u,v);
            }
            else if(a[i]-a[i-1]>1)
            {
                sum=0;
                break;
            }
            else
            {

            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
