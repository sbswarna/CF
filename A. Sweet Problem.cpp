#include<bits/stdc++.h>
using namespace std;
long long a[10],tst,mx;
int main()
{
    cin>>tst;
    while(tst--)
    {
        mx=-1;
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        long long ans=a[0];
        long long x=a[2];
        x-=ans;
        ans+=min(x,a[1]);
        mx=max(mx,ans);
        cout<<mx<<endl;
        ans=a[0];
        x=a[1];
        x-=ans;
        ans+=min(x,a[2]);
        mx=max(mx,ans);
        cout<<mx<<endl;
        ans=a[1];
        x=a[2];
        x-=ans;
        ans+=min(x,a[0]);
        mx=max(mx,ans);
        cout<<mx<<endl;
    }
    return 0;
}
