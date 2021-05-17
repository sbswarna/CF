#include<bits/stdc++.h>
using namespace std;
int tst,k;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>k;
        int gcd=__gcd(100,k);
        cout<<100/gcd<<endl;
    }
    return 0;
}
