#include<bits/stdc++.h>
using namespace std;
int tst;
string s;
map<int,int>mp;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        cout<<s.size()<<endl;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]-'0']++;
        }
        int cnt=0;
        for(int i=0;i<9;i++)
        {
            if(mp[i]>0)
                cnt++;
        }
        if(cnt==1)
            cout<<"0"<<endl;
        /*else
        {
            /*for(int i=0;i<9;i++)
            {

            }
        }*/

    }
    return 0;
}
