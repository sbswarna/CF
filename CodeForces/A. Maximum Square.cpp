#include<bits/stdc++.h>
using namespace std;
int tst,a[10004],n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int ans;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<=a[n-1];i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(a[j]>=i)
                {
                    cnt++;
                }
            }
            if(cnt>=i)
            {
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
