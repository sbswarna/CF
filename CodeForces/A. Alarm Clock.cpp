#include<bits/stdc++.h>
using namespace std;
long long tst,a,b,c,d,p,q;
int main()
{
#ifndef ONLINE_JUDGE
    {
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    }
#endif
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b>>c>>d;
        if(a<=b)
        {
            cout<<b<<endl;
        }
        else
        {
            if(c<=d)
            {
                cout<<-1<<endl;
            }
            else
            {
                p=abs(a-b);
                q=abs(c-d);
                if(p%q==0)
                {
                    cout<<b+((p/q)*c)<<endl;
                }
                else
                {
                    cout<<b+(((p/q)+1)*c)<<endl;
                }
            }
        }
    }
    return 0;
}
