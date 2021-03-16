#include<bits/stdc++.h>
using namespace std;
int n,z[100003],o[100003];
string s;
int main()
{
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            z[i]=z[i-1]+1;
            o[i]=o[i-1];
        }
        else
        {
            z[i]=z[i-1];
            o[i]=o[i-1]+1;
        }
    }
    //cout<<min(zero,one)<<endl;
    if(z[n-1]==0||o[n-1]==0)
        cout<<0<<endl;
    else
    {
        if(z[n-1]==o[n-1])
            cout<<o[n-1]*2<<endl;
        else
        {
            int f=0;
            for(int i=(min(z[n-1],o[n-1])*2); i>=1; i--)
            {
                for(int j=0; j<=n-i; j++)
                {
                    int p,q;
                    if(z[j]==z[j-1])
                    {
                        p=abs(z[j]-z[j+i-1]);
                    }
                    else
                    {
                        p=abs(z[j]-z[j+i-1])+1;
                    }
                    if(o[j]==o[j-1])
                    {
                        q=abs(o[j]-o[j+i-1]);
                    }
                    else
                    {
                        q=abs(o[j]-o[j+i-1])+1;
                    }
                    //cout<<p<<" "<<q<<endl;
                    if(p==q)
                    {
                        cout<<p*2<<endl;
                        f=1;
                        break;
                    }
                }
                if(f==1)
                    break;
            }
        }
    }
    return 0;
}
