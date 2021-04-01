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
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                if(s[i]=='a')
                {
                    s[i]='b';
                }
                else
                    s[i]='a';
            }
            else
            {
                if(s[i]=='z')
                {
                    s[i]='y';
                }
                else
                    s[i]='z';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
