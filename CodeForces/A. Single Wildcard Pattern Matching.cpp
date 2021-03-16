#include<bits/stdc++.h>
using namespace std;
int n,m;
string s,t;
int main()
{
    cin>>n>>m;
    cin>>s>>t;
    int k=0,f=-1;
    string s1,s2;
    for(int i=0; i<n; i++)
    {
        if(s[i]!='*')
        {
            s1+=s[i];
        }
        else
        {
            f=i;
            break;
        }
    }
    if(f==-1)
    {
        if(s==t)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        for(int i=f+1; i<n; i++)
        {
            s2+=s[i];
        }
        if(s1+s2==t)
            cout<<"YES"<<endl;
        else
        {
            string k;
            for(int i=f; i<=m-(n-f); i++)
            {
                k+=t[i];
            }
            if(s1+k+s2==t)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    //main();
    return 0;
}
