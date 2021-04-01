#include<bits/stdc++.h>
using namespace std;
long long tst,n,k;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        if(k<n)
            cout<<k<<endl;
        else if(k==n)
            cout<<k+1<<endl;
        else
        {
            long long x=k/(n-1);
            long long y=k%(n-1);
            if(y==0)
                cout<<(x*n)-1<<endl;
            else
                cout<<y+(x*n)<<endl;
        }
    }
    return 0;
}
