#include<bits/stdc++.h>
using namespace std;
long long tst,n,x,a[1000003];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>x;
        long long s=0,cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>x)
            {
                s+=a[i]-x;
            }
            if(a[i]>=x)
                cnt++;
        }
        sort(a,a+n);
        long long d;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]<x)
            {
                d=x-a[i];
                if(s-d>=0)
                {
                    s-=d;
                    a[i]=x;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
