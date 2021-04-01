#include<bits/stdc++.h>
using namespace std;
int tst,n,a[105],b[105];
map<int,int>mp;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            mp[a[i]]=i;
        }
        int l=1,r=n;
        while(true)
        {
            int mx=a[l];
           for(int i=l;i<=r;i++)
           {
               mx=max(mx,a[i]);
           }
        }
    }
    return 0;
}
