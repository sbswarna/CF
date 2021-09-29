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
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else
                c++;
        }
        if(b==0)
        {
            cout<<"NO"<<endl;
        }
        else if(c==0)
        {
            if(a==b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(b>=c&&b-c==a)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
