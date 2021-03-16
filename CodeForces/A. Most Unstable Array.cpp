#include<bits/stdc++.h>
using namespace std;
long long tst,n,k;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        if(n==1)
            cout<<0<<endl;
        else if(n==2)
            cout<<k<<endl;
        else
            cout<<k*2<<endl;
    }
    return 0;
}
