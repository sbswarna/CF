#include<bits/stdc++.h>
using namespace std;
int tst,n;
string s;
stack<char>stk;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cin>>s;
        stk=stack<char>();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                stk.push(s[i]);
            }
            else
            {
                if(!stk.empty())
                {
                    stk.pop();
                }
            }
        }
        cout<<stk.size()<<endl;
    }
    return 0;
}
