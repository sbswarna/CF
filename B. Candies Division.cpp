#include<bits/stdc++.h>
using namespace std;
long long k,n,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        long long p=n/k;
        if(n%k==0)
            cout<<n<<endl;
        else
        {
            cout<<min((p*k)+(k/2),n)<<endl;
        }
    }
    return 0;
}
