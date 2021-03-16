#include<bits/stdc++.h>
using namespace std;
long long n,r,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>r;
        //cout<<(n*(n+1))/2<<" "<<(r*(r+1))/2<<endl;
        if(n<=r)
        {
            n--;
            cout<<(((n*(n+1))/2))+1<<endl;
        }
        else
        {
            cout<<((r*(r+1))/2)<<endl;
        }
    }
    return 0;
}
