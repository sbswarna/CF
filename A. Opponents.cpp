#include<bits/stdc++.h>
using namespace std;
vector<int>v;
string s[150];
int n,d;
int main()
{
    cin>>n>>d;
    for(int i=0; i<d; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i][j]=='0')
            {
                v.push_back(i);
                break;
            }
        }
    }
    if(v.size()==1)
        cout<<1<<endl;
    else
    {
        int c=0,mx=-1;
        for(int i=1; i<v.size(); i++)
        {
            if(v[i]-v[i-1]==1)
            {
                c++;
            }
            mx=max(mx,c);
            if(v[i]-v[i-1]!=1)
            {
                c=0;
            }
        }
        if(mx>=0)
        cout<<mx+1<<endl;
        else if(mx==-1)
            cout<<0<<endl;
    }
    return 0;
}
