#include<bits/stdc++.h>
using namespace std;
string s;
int tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        int f=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='a')
            {
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            string t;
            t=s;
            s=s+"a";
            f=0;
            for(int i=0; i<=s.size()/2; i++)
            {
                if(s[i]!=s[s.size()-1-i])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                cout<<s<<endl;
            else
            {
                cout<<"a"+t<<endl;
            }
        }
    }
    return 0;
}
