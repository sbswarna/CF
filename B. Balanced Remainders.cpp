#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int x=n/3;
        int cnt0=0,cnt1=0,cnt2=0
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mod[a[i]]=3-(a[i]%3);
            mp[a[i]]++;
            if(a[i]%3==0)
                cnt0++
            else if(a[i]%3==1)
                cnt1++;
            else
                cnt2++;
        }
        sort(mod,mod+101);
        if(cnt0==x&&cnt1==x&&cnt2==x)
            cout<<0<<endl;
        else
        {

        }
    }
    return 0;
}
