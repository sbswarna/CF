#include<bits/stdc++.h>
using namespace std;
long long tst,n;
map<long long,long long>mp;
int main()
{
    for(long long i=1;i<=10001;i++)
    {
        mp[i*i*i]=1;
    }
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int f=0;
        for(long long i=1;i<=10001;i++)
        {
            long long x=n-(i*i*i);
            //cout<<x<<endl;
            if(mp[x]==1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
