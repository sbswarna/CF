#include<bits/stdc++.h>
using namespace std;
int tst,n;
string s,t,u;
vector<int>v0,v1;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cin>>s;
        int cnt1=0,cnt0=0;
        s.push_back('p');
        for(int i=0; i<=n; i++)
        {
            if(s[i]=='1')
            {
                if(cnt0!=0)
                {
                    v0.push_back(cnt0);
                    cnt0=0;
                }
                cnt1++;
            }
            else
            {
                if(cnt1!=0)
                {
                    v1.push_back(cnt1);
                    cnt1=0;
                }
                cnt0++;
            }
        }
        for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        cout<<endl;
        for(int i=0;i<v0.size();i++)
            cout<<v0[i]<<" ";
        cout<<endl;
        if(s[0]=='0')
        {
            int l=v0.size()-1;
            int m=v1.size();
            for(int i=1;i<l;i++)
            {

            }
        }
    }
    return 0;
}
