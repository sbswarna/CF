#include<bits/stdc++.h>
using namespace std;
int tst,n,a[100];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int cnt=0;
        for(int i=2; i<=n; i++)
        {
            if((a[i]-a[i-1])<=1)
                cnt++;
        }
        if(cnt==n-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
