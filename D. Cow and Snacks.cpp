#include<bits/stdc++.h>
using namespace std;
long long n,m,parent[100007],i;
pair<long long,long long>p[100003];
long long boss(long long u)
{
    if(parent[u]!=u)
    {
        parent[u]=boss(parent[u]);
    }
    return parent[u];
}
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    for(i=0;i<=n;i++)
    {
        parent[i]=i;
    }
    long long cnt=0,mx=-1;
    for(i=1;i<=m;i++)
    {
        long long x,y,bx,by;
        x=p[i].first;
        y=p[i].second;
        bx=boss(x);
        by=boss(y);
        if(bx!=by)
        {
            parent[bx]=parent[by];
            cnt++;
        }
    }
    //cout<<mx<<endl;
    cout<<m-cnt<<endl;
    return 0;
}

