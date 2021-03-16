#include<bits/stdc++.h>
using namespace std;
long long a,b,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b;
        if(a<b)
        {
            a+=a;
        }
        else
        {
            b+=b;
        }
        cout<<max(a,b)*max(a,b)<<endl;
    }
    return 0;
}
