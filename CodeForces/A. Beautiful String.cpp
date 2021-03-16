#include<bits/stdc++.h>
using namespace std;
int tst,f;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        f=0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]!='?')
            {
                if(s[i]==s[i-1])
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
            cout<<-1<<endl;
        else
        {
            if(s.size()==1)
            {
                if(s[0]=='?')
                    cout<<'a'<<endl;
                else
                    cout<<s<<endl;
            }
            else
            {
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]=='?')
                    {
                        if(i==0)
                        {
                            if(s[i+1]=='a')
                                s[i]='b';
                            else if(s[i+1]=='b')
                                s[i]='c';
                            else
                                s[i]='b';
                        }
                        else
                        {
                            if(s[i-1]=='a')
                            {
                                if(s[i+1]=='a')
                                    s[i]='b';
                                else if(s[i+1]=='b')
                                    s[i]='c';
                                else
                                    s[i]='b';
                            }
                            else if(s[i-1]=='b')
                            {
                                if(s[i+1]=='a')
                                    s[i]='c';
                                else if(s[i+1]=='b')
                                    s[i]='c';
                                else
                                    s[i]='a';
                            }
                            else if(s[i-1]=='c')
                            {
                                if(s[i+1]=='a')
                                    s[i]='b';
                                else if(s[i+1]=='b')
                                    s[i]='a';
                                else
                                    s[i]='b';
                            }
                        }
                    }
                }
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]=='?')
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0)
                    cout<<s<<endl;
                else
                    cout<<-1<<endl;
            }
        }
    }
    return 0;
}
