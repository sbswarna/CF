#include<bits/stdc++.h>
using namespace std;
long long n,m,i;
pair<long long,long long>p[25];
int main()
{
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>p[i].second>>p[i].first;
    }
    sort(p,p+m);
//     for(i=0;i<m;i++)
//    {
//        cout<<p[i].second<<" "<<p[i].first<<endl;
//    }
    long long sum=0;
    for(i=m-1; i>=0; i--)
    {
        //cout<<n-p[i].second<<endl;
        if(n-p[i].second>=0)
        {
            n-=p[i].second;
            sum+=(p[i].second*p[i].first);
        }
        else
        {
            break;
        }
    }
    if(n>0)
    {
        sum+=(p[i].first*n);
    }
    cout<<sum<<endl;
    return 0;
}
