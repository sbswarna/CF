#include<bits/stdc++.h>
using namespace std;
long long n,tst,a[200005],b[200005];
long long food()
{
    long long sum=0,mx=-1;
    for(long long i=0; i<n; i++)
    {
        int f=0;
        if(a[i]>sum+b[i])
        {
            sum+=b[i];
            f=1;
        }
        if(f==0)
        {
            mx=max(mx,max(a[i],sum));
        }
        else
        {
            mx=max(mx,sum);
        }
    }
    return mx;
}
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(long long i=0; i<n; i++)
        {
            cin>>b[i];
        }
        cout<<food()<<endl;
    }
    return 0;
}
