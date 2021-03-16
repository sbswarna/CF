#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,f=0,u=0,t=0;
    char s[310][310],c,ch;
    string a,b;
    cin>>n;
    getchar();
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>s[i][j];
            if(i==j)
            {
                if(i!=n/2)
                {
                    a.push_back(s[i][j]);
                    s[i][j]='1';
                }
                else
                {
                    a.push_back(s[i][j]);
                    s[i][j]='1';
                }
            }
            else if(j==n-i-1)
            {
                if(j!=n/2)
                {
                    a.push_back(s[i][j]);
                    s[j][i]='1';
                }
            }
            else
            {
                if(s[i][j]!='1')
                    b.push_back(s[i][j]);
            }
        }
    }
    //cout<<a<<endl;
    //cout<<b<<endl;
    c=a[0];
    ch=b[0];
    f=0;
    t=0;
    for(i=1; i<a.size(); i++)
    {
        if(a[i]!=c)
        {
            f=1;
            break;
        }
    }
    for(i=1; i<b.size(); i++)
    {
        if(b[i]==ch&&ch!=c)
        {
            t=0;
        }
        else
        {
            t=1;
            break;
        }
    }
    if(f==0&&t==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    a.clear();
    b.clear();
    //main();
    return 0;
}
