#include<bits/stdc++.h>
using namespace std;
string s;
int n,k;
int main()
{
    cin>>n>>k;
    cin>>s;
    if(k==0)
        cout<<s<<endl;
    else
    {
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]-'0'>1&&i==0)
                {
                    s[i]='1';
                    k--;
                }
                else if(s[i]-'0'>0&&i>0)
                {
                    s[i]='0';
                    k--;
                }
                if(k==0)
                    break;
            }
            cout<<s<<endl;
        }
    }
    //main();
    return 0;
}
