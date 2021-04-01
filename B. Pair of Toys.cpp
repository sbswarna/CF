#include<bits/stdc++.h>
using namespace std;
long long i,n,k,c;
int main()
{
    c=0;
    cin>>n>>k;
    if(n==1&&k>=1)
        cout<<0<<endl;
    else
    {
        if(n+(n-1)<k)
        {
            cout<<0<<endl;
        }
        else if(n+(n-1)==k)
        {
            cout<<1<<endl;
        }
        else
        {
            long long x=k/2;
            if(x*2!=k)
                cout<<x<<endl;
            else
                cout<<x-1<<endl;
        }
    }
    //main();
    return 0;
}
