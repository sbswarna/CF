#include<bits/stdc++.h>
using namespace std;
long long tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else
        {
            int f=0;
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    cout<<n/i<<" "<<n-(n/i)<<endl;
                    f=1;
                    break;
                }
            }
            if(f==0)
                cout<<1<<" "<<n-1<<endl;
        }
    }
    return 0;
}
