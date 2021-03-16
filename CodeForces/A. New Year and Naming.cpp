#include<bits/stdc++.h>
using namespace std;
string s[50],t[50];
int n,m,q,y;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>t[i];
    }
    cin>>q;
    while(q--)
    {
        cin>>y;
        if(y%n==0)
        {
            cout<<s[n-1];
        }
        else
        {
            cout<<s[(y%n)-1];
        }
        if(y%m==0)
        {
            cout<<t[m-1];
        }
        else
            cout<<t[(y%m)-1];
            cout<<endl;
    }
    return 0;
}
