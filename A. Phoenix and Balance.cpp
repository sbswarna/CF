#include<bits/stdc++.h>
using namespace std;
long long n,tst,a[100];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(long long i=1; i<=n; i++)
        {
            a[i]=pow(2,i);
        }
        long long sum1=0,sum2=0;
        if(n==2)
        {
            cout<<abs(a[1]-a[2])<<endl;
        }
        else
        {
            for(long long i=1; i<n/2; i++)
            {
               sum1+=a[i];
            }
            sum1+=a[n];
            for(long long i=n/2; i<n; i++)
            {
               sum2+=a[i];
            }
            cout<<abs(sum1-sum2)<<endl;
        }
    }
    return 0;
}
