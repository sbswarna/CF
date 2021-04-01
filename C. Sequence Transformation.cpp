#include<bits/stdc++.h>
using namespace std;
int tst,n,a[200005],cnt[200005];
vector<int>v[200005];
int main()
{
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            v[a[i]].clear();
            cnt[a[i]]=0;
        }
        for(int i=0; i<n; i++)
        {
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
        printf("%d\n",mn);
        }
    return 0;
}
