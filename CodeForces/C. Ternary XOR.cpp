#include<bits/stdc++.h>
using namespace std;
long long n,tst;
string s,t1,t2;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cin>>s;
        long long s1=0,s2=0;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                t1.push_back('1');
                t2.push_back('1');
            }
            else
            {
                if(s[i]=='2')
                {
                    if(t1>t2)
                    {
                        t1.push_back('0');
                        t2.push_back('2');
                    }
                    else
                    {
                        t1.push_back('1');
                        t2.push_back('1');
                    }
                }
                else if(s[i]=='1')
                {
                    if(t1<=t2)
                    {
                        t1.push_back('1');
                        t2.push_back('0');
                    }
                    else
                    {
                        t1.push_back('0');
                        t2.push_back('1');
                    }
                }
                else
                {
                    t1.push_back('0');
                    t2.push_back('0');
                }
            }
        }
        cout<<t1<<endl<<t2<<endl;
        t1.clear();
        t2.clear();
        s.clear();
    }
    return 0;
}
