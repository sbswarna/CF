#include<bits/stdc++.h>
using namespace std;
string s;
int tst,n,c0,c1,h;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>c0>>c1>>h;
        cin>>s;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                sum+=min(h+c0,c1);
            }
            else
                sum+=min(h+c1,c0);
        }
        cout<<sum<<endl;
    }
    return 0;
}
