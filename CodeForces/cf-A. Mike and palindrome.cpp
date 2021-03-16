#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,l,c;
   string s;
    cin>>s;
    c=0;
    l=s.size();

    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            c++;
        }
    }
    if(l%2!=0)
    {
    if(c==1||c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    else
    {
        if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

        return 0;
}
