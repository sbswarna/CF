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
        set<pair<int,int> >st;
        map<pair<int,int>,int>mp;
        st.insert(make_pair(0,0));
        mp[make_pair(0,0)]=0;
        int sx=0,sy=0,x=0,y=0,cnt=0,in,mx=INT_MAX;
        for(int i=0; i<n; i++)
        {
            int prevx=x;
            int prevy=y;
            if(s[i]=='L')
                x--;
            else if(s[i]=='R')
                x++;
            else if(s[i]=='U')
                y++;
            else if(s[i]=='D')
                y--;
            //cout<<x<<" "<<y<<endl;
            if(st.find(make_pair(x,y))!=st.end())
            {
                if(i+1-mp[make_pair(x,y)]<mx)
                {
                    mx=i+1-mp[make_pair(x,y)];
                    in=mp[make_pair(x,y)];
                }
                mp[make_pair(x,y)]=i+1;
            }
            else
            {
                st.insert(make_pair(x,y));
                mp[make_pair(x,y)]=i+1;
            }
        }
        if(mx!=INT_MAX)
        {
            cout<<in+1<<" "<<in+mx<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}
