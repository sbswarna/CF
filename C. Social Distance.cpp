#include<bits/stdc++.h>
using namespace std;
int tst,n,k;
vector<int>v;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                v.push_back(i+1);
            }
        }
        int cnt=0;
        if(v.size()==0)
        {
            for(int i=1; i<=n; i+=k+1)
            {
                cnt++;
            }
        }
        else
        {
            for(int i=1; i<v.size(); i++)
            {
                if(v[i]-v[i-1]-1>k+1)
                {
                    cnt+=((v[i]-v[i-1]-1)/(k+1));
                }
            }
            //cout<<cnt<<endl;
            cnt+=(v[0]-1)/(k+1);
            if(n-v[v.size()-1]>=k)
            {
                for(int i=v[v.size()-1]+1+k; i<=n; i+=k+1)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        v.clear();
    }
    return 0;
}
