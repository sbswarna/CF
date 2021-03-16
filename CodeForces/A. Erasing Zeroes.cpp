#include<bits/stdc++.h>
using namespace std;
string s;
int tst;
vector<int>v;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        v.clear();
        if(s.size()<=2)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='1')
                {
                    v.push_back(i);
                }
            }
            int sum=0;
            if(v.size()>1)
            {
                for(int i=1; i<v.size(); i++)
                    sum+=abs((v[i]-v[i-1]-1));
                cout<<sum<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}
