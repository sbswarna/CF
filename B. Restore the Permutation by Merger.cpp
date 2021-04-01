#include<bits/stdc++.h>
using namespace std;
map<long long,long long>mp;
long long tst,a[1000],n;
vector<long long>v;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=1;i<=2*n;i++)
        {
            cin>>a[i];
            if(mp.find(a[i])==mp.end())
            {
                mp[a[i]]=1;
                v.push_back(a[i]);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
        mp.clear();
    }
    return 0;
}

