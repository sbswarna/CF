#include<bits/stdc++.h>
using namespace std;
long long tst,a[105],n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long mx=-1,f=0,sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mx=max(a[i],mx);
            sum+=a[i];
        }
        for(int i=1; i<=mx; i++)
        {
            long long x=n*i;
            if(x>=sum)
            {
                f=1;
                cout<<i<<endl;
                break;
            }
        }
        if(f==0)
        {
            cout<<n*(mx+1)<<endl;
        }
    }
    return 0;
}
