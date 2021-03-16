#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long f,c,d,l,i;
    char s[109];
    cin.getline(s,109);
    l=strlen(s);
    c=0;
    d=0;
    f=0;
    for(i=0;i<l;i++)
    {
        if(s[i]=='0')
        {
            c++;
            d=0;
            if(c==7)
            {
                f=1;
                break;
            }
        }
        else if(s[i]=='1')
        {
            d++;
            c=0;
            if(d==7)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    main();
    return 0;
}
