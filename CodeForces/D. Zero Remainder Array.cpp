#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        x=0;
        for(long long i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        for(long long i=1;i<=n;i++)
        {
            v.push_back(a[i]%k);
        }
    }
    return 0;
}
