#include<bits/stdc++.h>
using namespace std;
int tst,n;
string s,t;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cin>>s>>t;
        int cnt=0,f=0;
        char p,q,p1,q1;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i]&&f==0)
            {
                p=s[i];
                q=t[i];
                f=2;
                cnt++;
            }
            else if(s[i]!=t[i]&&f==2)
            {
                p1=s[i];
                q1=t[i];
                cnt++;
            }
            else if(s[i]!=t[i])
            {
                cnt++;
            }
        }
        if(cnt>2)
            cout<<"NO"<<endl;
        else
        {
            if(p==p1&&q==q1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
