#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,t,k,cnt1=0,cnt0=1,a[100005];
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            cnt0++;
        else
            cnt1++;
    }
    for(int i=1;i<=q;i++)
    {
        cin>>t>>k;
        if(t==1)
        {
            if(a[k]==0)
            {
                cnt1++;
                cnt0--;
                a[k]=1;
            }
            else
            {
                cnt0++;
                cnt1--;
                a[k]=0;
            }
        }
        else
        {
            if(k>cnt1)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
    }
    return 0;
}
