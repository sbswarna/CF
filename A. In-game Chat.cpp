#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,cntp=0,cnt=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=')')
            {
                break;
            }
            else
            {
                cntp++;
            }
        }
        if(cntp>n-cntp)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
