#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>ch>>k;
        if(ch=='+')
        {
            mp[k]++;
        }
        else
        {
            mp[k]--;
        }
    }
    return 0;
}
