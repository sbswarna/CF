#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int cnt=0;
        stack<char>stk;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                stk.push(s[i]);
            }
            else
            {
                if(!stk.empty())
                    stk.pop();
                if(!stk.empty())
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
