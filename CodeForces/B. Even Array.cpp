#include<bits/stdc++.h>
using namespace std;
int tst,a[100],n,z,o,cnt;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        z=0,o=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0&&a[i]%2==1)
            {
                z++;
            }
            else if(i%2==1&&a[i]%2==0)
            {
                o++;
            }
            else if(i%2==a[i]%2)
            {
                cnt++;
            }
        }
        if(cnt==n)
            cout<<0<<endl;
        else
        {
            if(z!=o)
                cout<<-1<<endl;
            else
                cout<<z<<endl;
        }
    }
    return 0;
}
