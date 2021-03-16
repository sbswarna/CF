#include<bits/stdc++.h>
using namespace std;
int tst,cnt0=0,cnt1=0;
string t,s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        int f=0;
        cnt0=0,cnt1=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                cnt0++;
            else
                cnt1++;
            if(i!=s.size()-1)
            {
                if((s[i]=='1'&&s[i+1]=='1')||(s[i]=='0'&&s[i+1]=='0'))
                {
                    f=1;
                }
            }
        }
        if(cnt0==0||cnt1==0)
            cout<<s<<endl;
        else
        {
            if(f==0)
                cout<<s<<endl;
            else
            {
                for(int i=0; i<s.size(); i++)
                {
                    t.push_back(s[i]);
                    if(i!=s.size()-2)
                    {
                        if(s[i]=='0')
                            t.push_back('1');
                        else
                            t.push_back('0');
                    }
                    else
                    {
                       if(s[i+1]==s[i])
                       {
                           if(s[i]=='0')
                            t.push_back('1');
                        else
                            t.push_back('0');
                       }
                    }
                }
                cout<<t<<endl;
            }
        }
        t.clear();
    }
    return 0;
}
