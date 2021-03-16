#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c[104],a[104],i,k,n,d;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        cin>>c[i];
    }
    sort(c,c+k);
    long long f=0;
    d=k-1;
    if(a[0]==0)
    {
        a[0]=c[d];
        d--;
    }
    for(i=n-1;i>=1;i--)
    {
        if(a[i]==0)
        {
            a[i]=c[d];
            d--;
        }
        if(a[i]-a[i-1]<0)
        {
            f=1;
        }
    }
    if(f==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    //main();
    return 0;
}
