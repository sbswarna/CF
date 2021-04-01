#include<bits/stdc++.h>
using namespace std;
long long a[100],b[100],tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long mna=999999999999999,mnb=99999999999999;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            mna=min(mna,a[i]);
        }
        for(long long i=0;i<n;i++)
        {
            cin>>b[i];
            mnb=min(mnb,b[i]);
        }
        long long cnt=0;
        for(long long i=0;i<n;i++)
        {
            long long p=min(abs(a[i]-mna),abs(b[i]-mnb));
            cnt+=p;
            a[i]-=p;
            b[i]-=p;
        }
        mna=999999999999999,mnb=99999999999999;
        for(long long i=0;i<n;i++)
        {
            if(a[i]>0)
            mna=min(mna,a[i]);
        }
        for(long long i=0;i<n;i++)
        {
            if(b[i]>0)
            mnb=min(mnb,b[i]);
        }
        for(long long i=0;i<n;i++)
        {
            long long p=(abs(a[i]-mna)+abs(b[i]-mnb));
            cnt+=p;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
