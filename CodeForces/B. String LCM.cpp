#include<bits/stdc++.h>
using namespace std;
int tst;
string t,s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s>>t;
        string ns=s,nt=t;
        int ls=s.size();
        int lt=t.size();
        int lcm=(ls*lt)/__gcd(ls,lt);
        if(ls<lt)
        {
            int f=0;
            for(int i=1; i<lcm/ls; i++)
            {
                ns+=s;
            }
            //cout<<lcm<<endl<<ns<<endl;
            for(int i=1; i<=lcm/lt; i++)
            {
                for(int j=0; j<lcm; j+=lt)
                {
                    string x;
                    for(int k=j; k<j+lt; k++)
                    {
                        x.push_back(ns[k]);
                    }
                    if(x!=t)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1)
                    break;
            }
            if(f==0)
                cout<<ns<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            int f=0;
            for(int i=1; i<lcm/lt; i++)
            {
                nt+=t;
            }
            //cout<<lcm<<endl<<nt<<endl;
            for(int i=1; i<=lcm/ls; i++)
            {
                for(int j=0; j<lcm; j+=ls)
                {
                    string x;
                    for(int k=j; k<j+ls; k++)
                    {
                        x.push_back(nt[k]);
                    }
                    if(x!=s)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1)
                    break;
            }
            if(f==0)
                cout<<nt<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}
