#include<bits/stdc++.h>
using namespace std;
long long tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n<=9)
            cout<<n<<endl;
        else
        {
            long long ans=n,x;
            while(n>=10)
            {
                x=n/10;
                ans+=x;
                n=x+(n%10);
            }
            cout<<ans<<endl;
            //cout<<ans+n-cnt<<" "<<x<<endl;
        }
    }
    return 0;
}
