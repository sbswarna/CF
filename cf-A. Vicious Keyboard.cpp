#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,c,l;
    string s;
    cin>>s;
    l=s.size();
    if(l==1)
        cout<<0<<endl;
    else
    {
        c=0;
        for(i=1;i<l;i++)
        {
            if(s[i]=='K'&&s[i-1]=='V')
            {
                s[i]='a';
                s[i-1]='a';
                c++;
            }
        }
        for(i=1;i<l;i++)
        {
            if(s[i]=='K'&&s[i-1]=='K'||s[i-1]=='V'&&s[i]=='V')
            {
                c++;
                break;
            }
        }
        cout<<c<<endl;
    }
    main();
    return 0;
}
