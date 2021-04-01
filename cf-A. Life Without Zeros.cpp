#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l1,l2,i,p,carry,sm,s,n0,n;
    string a,b,c,e;
    cin>>a>>b;
    l1=a.size();
    l2=b.size();
    //cout<<l1<<" "<<l2<<endl;
    if(l1<l2)
    {
        for(i=0; i<l2-l1; i++)
            e.push_back('0');
        a=e+a;
        //cout<<a<<endl;
    }
    else
    {
        for(i=0; i<l1-l2; i++)
            e.push_back('0');
        b=e+b;
        //cout<<b<<endl;
    }
    carry=0;
    sm=0;
    s=0;
    for(i=l1-1; i>=1; i--)
    {
        p=(a[i]-'0')+(b[i]-'0')+carry;
        if(p>9)
        {
            c.push_back((p-10)+'0');
            carry=1;
        }
        else
        {
            c.push_back(p+'0');
            carry=0;
        }
    }
    p=a[0]-'0'+b[0]-'0'+carry;
    if(p>9)
    {
        c.push_back((p-10)+'0');
        c.push_back('1');
    }
    else
    {
        c.push_back(p+'0');
    }
    for(i=0; i<l1; i++)
    {
        if(a[i]!='0')
            s=s*10+(a[i]-'0');
    }
    for(i=0; i<l1; i++)
    {
        if(b[i]!='0')
            sm=sm*10+(b[i]-'0');
    }
    n0=s+sm;
    n=0;
    for(i=(c.size())-1; i>=0; i--)
    {
        if(c[i]!='0')
        {
            n=n*10+(c[i]-'0');
        }
    }
    if(n==n0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

