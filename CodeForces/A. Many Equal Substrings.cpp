#include<bits/stdc++.h>
using namespace std;
int n,k;
string s,t;
int main()
{
    cin>>n>>k;
    cin>>s;
    if(n!=1)
    {
        int c=1,p;
        t=s;
        int i=1,x=0;
        for(int j=1; j<n; j++)
        {
            if(s[j]!=s[0])
            {
                x=j;
                break;
            }
        }
        if(s[0]==s[n-1])
            p=1;
        else
            p=0;
        while(1)
        {
            if(c==k)
            {
                break;
            }
            else
            {
                t.push_back(s[p]);
                p++;
                //cout<<t<<endl;
                if(p==n)
                {
                    p=x;
                }
                if(t.substr(i,i+n-1)==s)
                {
                    c++;
                }
                i++;
            }
        }
    }
    else
    {
        for(int i=1; i<=k; i++)
            t+=s;
    }
    cout<<t<<endl;
    return 0;
}
