#include<bits/stdc++.h>
using namespace std;
string s,t;
int tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        t.push_back(s[0]);
        t.push_back(s[1]);
        for(int i=3;i<s.size();i+=2)
        {
            t.push_back(s[i]);
        }
        cout<<t<<endl;
        t.clear();
    }
    return 0;
}
