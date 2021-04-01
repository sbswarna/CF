#include<bits/stdc++.h>
using namespace std;
int tst,a[100],freq[150],n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        memset(freq,0,sizeof(freq));
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        int mx=-1;
        for(int i=1; i<=100; i++)
        {
            int cnt=0;
            for(int j=0; j<n; j++)
            {
                if(i>a[j])
                {
                    int x=i-a[j];
                    if(freq[x]>0&&freq[a[j]]>0)
                    {
                        int p=(min(freq[x],freq[a[j]]));
                        if(x==a[j])
                            p=p/2;
                        freq[x]-=p;
                        freq[a[j]]-=p;
                        if(freq[a[j]]>=0&&freq[x]>=0)
                        {
                            cnt+=p;
                        }
                        else
                        {
                            freq[x]+=p;
                            freq[a[j]]+=p;
                        }
                    }
                }
            }
            //cout<<i<<" "<<cnt<<endl;
            mx=max(mx,cnt);
            memset(freq,0,sizeof(freq));
            for(int j=0; j<n; j++)
            {
                freq[a[j]]++;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
