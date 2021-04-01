#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin>>n;
    fo(int i=0; i<n; i++)
    {
        cin>>s[i];
        if(mp.find(s[i])==mp.end())
        {
            mp[s[i]]=make_pair("OK",0);
        }
        else
        {
            mp[s[i]]=make_pair(s[i],++mp[s[i].second);
        }
    }
    return 0;
}
