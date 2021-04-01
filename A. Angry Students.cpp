#include<bits/stdc++.h>
using namespace std;
int tst,n;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cin>>s;
        int ans=0;
        while(1)
        {
            int cnt=1;
            ans++;
            for(int i=n-2;i>=0;i--)
            {
                if(s[i]=='A')
                {
                    s[i+1]='A';
                    cnt++;
                }
            }
            cout<<s<<endl;
            if(cnt==n)
            {
                ans++;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
