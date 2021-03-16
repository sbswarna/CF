#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long c=1,mx=-1,h,m,h1,m1,n,d=0,i,ara[100000];
    cin>>n;
    cin>>h>>m;
    for(i=2;i<=n;i++)
    {
        cin>>h1>>m1;
        if(h==h1&&m==m1)
        {
            c++;
        }
        if(h!=h1||m!=m1||i==n)
        {
            if(c>mx)
            mx=c;
            c=1;
        }
        h=h1;
        m=m1;
    }
    if(c>mx)
        mx=c;
    cout<<mx<<endl;
    return 0;
}
