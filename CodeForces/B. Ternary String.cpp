#include<bits/stdc++.h>
using namespace std;
string s;
int tst;
vector<int>v1,v2,v3;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                v1.push_back(i);
            }
            else if(s[i]=='2')
            {
                v2.push_back(i);
            }
            else
            {
                v3.push_back(i);
            }
        }
        if(v1.size()==0||v2.size()==0||v3.size()==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int low1,up1,low2,up2;
            for(int i=0; i<v1.size(); i++)
            {
                cout<<v1[i]<<endl;
                low1=lower_bound(v2.begin(), v2.end(), v1[i])-v2.begin();
                up1=upper_bound(v2.begin(), v2.end(), v1[i])-v2.begin();
                low2=lower_bound(v3.begin(), v3.end(), v1[i])-v3.begin();
                up2=upper_bound(v3.begin(), v3.end(), v1[i])-v3.begin();
                cout<<v2[low1]<<" "<<v2[up1]<<" "<<v3[low2]<<" "<<v3[up2]<<endl;
            }
        }
        v1.clear();
        v2.clear();
        v3.clear();
    }
    return 0;
}
