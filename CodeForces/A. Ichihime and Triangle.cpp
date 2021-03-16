#include<bits/stdc++.h>
using namespace std;
long long tst,b,c,d,a;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b>>c>>d;
        long long x=(a+b)/2;
        long long y=(b+c)/2;
        long long z=(c+d)/2;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}
