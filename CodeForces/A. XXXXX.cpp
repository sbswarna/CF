#include<bits/stdc++.h>
using namespace std;
int a[100005],tst,k,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=0,sum=0,mx=-1;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum%k!=0)
            {
                cnt++;
            }
            else
            {
                sum=a[i];
                cnt=1;
            }
            mx=max(mx,cnt);
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=a[i];
            if(sum%k!=0)
            {
                cnt++;
            }
            else
            {
                sum=a[i];
                cnt=1;
            }
            mx=max(mx,cnt);
        }
        cout<<mx<<endl;
    }
    return 0;
}
