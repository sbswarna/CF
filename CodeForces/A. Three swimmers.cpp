#include<bits/stdc++.h>
using namespace std;
long long tst,a,b,c,p,mn;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>p>>a>>b>>c;
        mn=min(a,min(b,c));
        if(p<mn)
            cout<<mn-p<<endl;
        else
        {
            long long x=p/mn;
            if(p%mn>0)
                x++;
            cout<<(mn*x)-p<<endl;
        }
    }
    return 0;
}
