#include<bits/stdc++.h>
using namespace std;
long long tst,n,a[300005],b[300005],vis[300005],x,y,z,in;
priority_queue<pair<pair<long long,long long>,long long> >pq;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        pq=priority_queue<pair<pair<long long,long long>,long long> >();
        for(int i=1; i<=n; i++)
        {
            cin>>a[i]>>b[i];
            pq.push(make_pair(make_pair(a[i]*-1,b[i]),i*-1));
        }
        memset(vis,0,sizeof(vis));
        long long cnt=0;
        while(!pq.empty())
        {
            x=pq.top().first.first*-1;
            y=pq.top().first.second;
            in=pq.top().second*-1;
            cout<<x<<" "<<y<<" "<<in<<endl;
            if(a[in]!=-1&&vis[in]!=-1)
            {
                cnt+=x;
                vis[in]=-1;
                //cout<<cnt<<endl;
            }
            pq.pop();
            z=in+1;
            if(z==n+1)
                z=1;
            if(a[z]<=y)
            {
                a[z]=-1;
            }
            else
            {
                a[z]-=y;
            }
            if(vis[z]!=-1)
                pq.push(make_pair(make_pair(a[z]*-1,b[z]),z*-1));
        }
        cout<<cnt<<endl;
    }
    return 0;
}
