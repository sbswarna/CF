#include<bits/stdc++.h>
using namespace std;
int a,tst,n;
map<int,int>mp;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int cnt=0,st=1,ed=n,f=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a;
            mp[a]=i;
            if(a!=i&&f==0)
            {
                st=i;
                f=1;
            }
            else if(a!=i&&f==1)
            {
                ed=i;
            }


        }
        f=0;
        for(int i=st; i<=ed; i++)
        {
            if(mp[i]!=i)
            {
                cnt++;
            }
            else
            {
                if(i>1&&i<n)
                    f=1;
            }
        }
        if(cnt==0)
            cout<<0<<endl;
        else if(cnt==n)
            cout<<1<<endl;
        else
        {
            if(f==1)
            cout<<2<<endl;
            else
                cout<<1<<endl;
        }
    }
    return 0;
}
