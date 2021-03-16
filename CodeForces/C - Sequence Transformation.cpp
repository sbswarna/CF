#include<bits/stdc++.h>
using namespace std;
int tst,n,a[200005],cnt[200005];
vector<int>v[200005];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0; i<=200005; i++)
        {
            cnt[i]=0;
            v[i].clear();
        }
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            v[a[i]].push_back(i+1);
            int x=v[a[i]].size();
            if(x>1)
            {
                if(v[a[i]][x-1]-v[a[i]][x-2]>1)
                {
                    cnt[a[i]]++;
                }
            }
        }
        int mn=999999;
        for(int i=0; i<n; i++)
        {
            if(v[a[i]][0]>1)
            {
                cnt[a[i]]++;
            }
            if(v[a[i]][v[a[i]].size()-1]<n)
            {
                cnt[a[i]]++;
            }
            mn=min(cnt[a[i]],mn);
        }
        cout<<mn<<endl;
    }
    return 0;
}

