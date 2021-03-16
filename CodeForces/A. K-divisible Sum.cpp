#include<bits/stdc++.h>
using namespace std;
long long tst,n,k;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        if(k==n)
            cout<<1<<endl;
        else if(n==1)
            cout<<k<<endl;
        else
        {
            if(n>k)
            {
                long long x=(n-k)%k;
                cout<<x+1<<endl;
            }
            else
            {
                long long x=(k-n)%k;
                if(x<n)
                    cout<<x+1<<endl;
                else
                {
                    long long y=1;
                    long long p=x%n;
                    if(p==0)
                        cout<<y+(x/n)<<endl;
                    else
                        cout<<y+(x/n)+1<<endl;
                }
            }
        }
    }
    return 0;
}
