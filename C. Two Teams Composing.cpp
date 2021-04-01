#include<bits/stdc++.h>
using namespace std;
int a[200005],tst,n,mx,x;
int main()
{
    scanf("%d",&tst);
    for(int j=1;j<=tst;j++)
    {
        int freq[200005]={0};
        scanf("%d",&n);
        mx=-1;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            freq[a[i]]++;
            mx=max(mx,freq[a[i]]);
            if(freq[a[i]]==1)
            {
                cnt++;
            }
        }
        if(mx==cnt)
            cnt--;
        if(mx>cnt)
        printf("%d\n",cnt);
        else
          printf("%d\n",mx);
    }
    return 0;
}
