#include<bits/stdc++.h>
using namespace std;
long long i,j,n,m;
pair<long long, pair<long long,long long> >a[200003];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i].first;
    }
    for(i=1;i<=n;i++)
    {
        cin>>a[i].second.first;
    }
    for(i=1;i<=n;i++)
    {
        cin>>a[i].second.second;
    }
    sort(a+1,a+n+1);
    /*for(i=1;i<=n;i++)
    {
        cout<<a[i].first<<" "<<a[i].second.first<<" "<<a[i].second.second<<endl;
    }*/
    cin>>m;
    long long j,b,f;
    for(j=1;j<=m;j++)
    {
        f=0;
        cin>>b;
        for(i=1;i<=n;i++)
        {
            if((a[i].second.first==b||a[i].second.second==b)&&a[i].first!=-1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<a[i].first;
            a[i].first=-1;
        }
        else
        {
            cout<<-1;
        }
        if(j!=m)
            cout<<" ";
        else
            cout<<endl;
    }
    //main();
    return 0;
}
