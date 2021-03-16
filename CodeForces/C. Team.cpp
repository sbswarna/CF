#include<bits/stdc++.h>
using namespace std;
long long m,n;
string s,t;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=max(n,m); i++)
    {
        if(m==0||n==0)
        {
            break;
        }
        s.push_back('0');
        n--;
        s.push_back('1');
        m--;
    }
    cout<<m<<" "<<n<<endl;
    if(n>2)
    {
        cout<<-1<<endl;
    }
    else if(n==1)
    {
        if(s[s.size()-1]=='1')
        {
            s.push_back('0');
            cout<<s<<endl;
        }
        else
        {
            cout<<'0';
            for(int i=1;i<s.size();i++)
            {
                cout<<s[i]<<s[i-1];
            }
            cout<<endl;
        }
    }
    else if(n==2)
    {
        if(s[s.size()-1]=='1')
        {
            s.push_back('0');
            cout<<s<<endl;
        }
        else
        {
            cout<<'0';
            for(int i=1;i<s.size();i++)
            {
                cout<<s[i]<<s[i-1];
            }
            cout<<endl;
        }
    }
        if(m>0)
        {
            for(int i=0; i<s.size(); i+=2)
            {
                t.push_back(s[i]);
                t.push_back(s[i+1]);
                t.push_back('1');
                m--;
                if(m==0)
                    break;
            }
            if(m>4)
            {
                cout<<-1<<endl;
            }
            else
            {
                if(m==4)
                {
                    if(t[t.size()-1]=='1'&&t[t.size()-2]=='1')
                    {
                        cout<<-1<<endl;
                    }
                    else
                    {
                        t="11"+t+"11";
                        cout<<t<<endl;
                    }
                }
                else if(m==3)
                {
                    if(t[t.size()-1]=='1'&&t[t.size()-2]=='1')
                    {
                        cout<<-1<<endl;
                    }
                    else
                    {
                        t="11"+t+"1";
                        cout<<t<<endl;
                    }
                }
                else if(m==2)
                {
                    t="11"+t;
                    cout<<t<<endl;
                }
                else if(m==1)
                {
                    cout<<"1"+t<<endl;
                }
                else
                    cout<<t<<endl;
            }
        }
        else
        {
            cout<<s<<endl;
        }
    return 0;
}
