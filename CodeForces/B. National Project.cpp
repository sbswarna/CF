#include<bits/stdc++.h>
using namespace std;
long long tst,n,g,b;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>g>>b;
        if(n<=g)
            cout<<n<<endl;
        else
        {
            long long mid=ceil(n/2.00);
            cout<<mid<<endl;
            long long x=(mid/g);
            long long ans=(x*g);
            cout<<ans<<endl;
            n=n-mid;
            if(ans%g!=0)
            {
                if(n-(ans%g)>0)
                {
                    n-=(ans%g);
                    ans+=(ans%g);
                }
                else
                {
                    ans+=n;
                }
            }
            if(x%2==1)
                x--;
            cout<<ans+(b*x-1)<<endl;
        }
    }
    return 0;
}
