#include<bits/stdc++.h>
using namespace std;
long long tst,n,k;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        for(int i=1; i<=k-3; i++)
        {
            cout<<1<<" ";
        }
        n-=(k-3);
        if(n%2==0)
        {
            if((n/2)%2==1)
                cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
            else
            {
                cout<<n/2<<" "<<(n/2)/2<<" "<<(n/2)/2<<endl;
            }
        }
        else
        {
            cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
        }
    }
    return 0;
}

