#include<bits/stdc++.h>
using namespace std;
long long tst,a,b;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b;
        long long dif=abs(b-a);
        long long x=dif/5;
        long long ans=0;
        if(x*5!=dif)
        {
            dif-=(x*5);
            ans+=x;
            x=dif/2;
            if(x*2!=dif)
            {
                dif-=(x*2);
                ans+=x;
                cout<<ans+dif<<endl;
            }
            else
                cout<<ans+x<<endl;
        }
        else
            cout<<x<<endl;
    }
    return 0;
}
