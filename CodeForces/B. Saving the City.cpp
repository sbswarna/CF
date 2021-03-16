#include<bits/stdc++.h>
using namespace std;
string s;
int n,a,b,tst;
vector<int>v;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b;
        cin>>s;
        s+="#";
        int cnt=0,c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1'&&s[i+1]=='1')
            {
                cnt++;
            }
            else if(s[i]=='1'&&s[i+1]=='0'||s[i]=='1'&&s[i+1]=='#')
            {
                v.push_back(cnt+1);
                cnt=0;
            }
            if(i>0)
            {
                if(s[i]=='0'&&s[i-1]=='1'&&s[i+1]=='1')
                    c++;
            }
        }
        /*for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        cout<<c<<endl;*/
        int x=(c*b)+a;
        int y=(v.size()-(c+1))*a;
        int z=x+y;
        //cout<<z<<endl;
        int m=v.size()*a;
        //cout<<m<<endl;
        if(c!=0)
        cout<<min(m,z)<<endl;
        else
            cout<<m<<endl;
        v.clear();
    }
    return 0;
}
