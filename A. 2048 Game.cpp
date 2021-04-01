#include<bits/stdc++.h>
using namespace std;
int tst,n,v;
vector<int>a;
map<int,int>mp;
int main()
{
    cin>>tst;
    while(tst--)
    {
        mp.clear();
        a.clear();
        cin>>n;
        int sum=0,f=0;
        for(int i=0; i<n; i++)
        {
            cin>>v;
            a.push_back(v);
            mp[a[i]]++;
            if(mp[a[i]]>1)
                f=1;
            if(a[i]==2048)
                f=2;
            sum+=a[i];
        }
        if(f==0||sum<2048)
            cout<<"NO"<<endl;
        else if(f==2)
            cout<<"YES"<<endl;
        else
        {
            for(int i=0; i<a.size(); i++)
            {
                if(mp[a[i]]>=2)
                {
                    mp[a[i]+a[i]]++;
                    mp[a[i]]=mp[a[i]]-2;
                    a.push_back(a[i]+a[i]);
                }
            }
            f=0;
            for(int i=0; i<a.size(); i++)
            {
                if(a[i]==2048)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
