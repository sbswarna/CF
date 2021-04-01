#include<bits/stdc++.h>
using namespace std;
long long w[200005],a[200005],tst,n,k;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        for(long long i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(long long i=1; i<=k; i++)
        {
            cin>>w[i];
        }
        sort(a+1,a+n+1);
        sort(w+1,w+k+1);
        long long sum=0,x=n,cnt=0;
        for(long long i=1; i<=k; i++)
        {
            if(w[i]==1)
            {
                sum+=(2*a[x]);
                x--;
                cnt++;
                w[i]=0;
            }
        }
        x=n-cnt;
        for(long long i=1; i<=k; i++)
        {
            if(w[i]>0)
            {
                sum+=a[x];
                x--;
                w[i]--;
            }
        }
        x=n-k;
        for(long long i=1;i<=k;i++)
        {
            if(w[i]>0)
            {
                long long p=x-w[i]+1;
                if(p>0)
                {
                    sum+=a[p];
                    w[i]=0;
                }
                else
                {
                    sum+=a[1];
                    w[i]=0;
                    break;
                }
                x=p-1;
            }
        }
        for(long long i=1; i<=k; i++)
        {
            if(w[i]>0)
            {
                sum+=(a[n-i+1]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
