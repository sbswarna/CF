#include<bits/stdc++.h>
using namespace std;
int tst;
string s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        int l=s.size(),x=0,ans=l;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='+')
                x++;
            else
                x--;
            if(x<0)
            {
                ans+=(i+1);
                x=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
