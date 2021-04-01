#include<bits/stdc++.h>
using namespace std;
long long a[30],i,f,n,k;
string s;
int main()
{
    cin>>n>>k;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        a[s[i]-'a']++;
    }
    f=0;
    for(i=0; i<26; i++)
    {
        if(a[i]>0)
        {
            if(a[i]>k)
            {
                f=1;
                break;
            }
        }
    }
    if(n<k)
        cout<<"YES"<<endl;
    else
    {
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    main();
    return 0;

}
