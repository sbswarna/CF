#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,n;
    string s;
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cin>>s;
        string t="trygub";
        string p,ans;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='t')
            {
                string s1;
                if(i<=n-6)
                {
                    for(int j=0; j<6; j++)
                    {
                        if(s[i+j]!=t[j])
                        {
                            break;
                        }
                        else
                        {
                            s1.push_back(t[j]);
                        }
                    }
                    if(s1==t)
                    {
                        for(int j=i; j<i+6; j++)
                            s[i]='#';
                        p+=s1;
                    }
                    else
                    {
                        ans.push_back(s[i]);
                    }
                }
                else
                {
                    ans.push_back(s[i]);
                }
            }
            else
            {
                if(s[i]!='#')
                    ans.push_back(s[i]);
            }
        }
        for(int i=p.size()-1; i>=0; i--)
            ans.push_back(p[i]);
        cout<<ans<<endl;

    }
    return 0;
}
