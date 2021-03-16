#include<bits/stdc++.h>
using namespace std;
long long tst,p,n,x,k,y;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>x>>y>>n;
        long long p=n%x;
        if(p>=y)
            cout<<(n-abs(p-y))<<endl;
        else
        {
            cout<<n-(x-abs(y-p))<<endl;
        }
    }
    return 0;
}
