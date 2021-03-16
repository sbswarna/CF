#include<bits/stdc++.h>
using namespace std;
long long tst,n,k,a[1000007];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        for(long long i=1; i<=n*k; i++)
        {
            cin>>a[i];
        }
        long long med=(n/2)+(n%2);
        long long sum=0;
        if(n==2)
        {
            for(long long i=1; i<=n*k; i+=2)
            {
                sum+=a[i];
            }
        }
        else
        {
            for(long long i=k; i<n*k; i+=(n-1))
            {
                //cout<<a[med+(i-1)]<<endl;
                sum+=a[med+(i-1)];
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}

