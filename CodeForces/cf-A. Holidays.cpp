#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r,wk,mn,mx;
    cin>>n;
    wk=n/7;
    mn=wk*2;
    r=n%7;
    if(r<=2)
    {
        mx=mn+r;
    }
    else if(r==6)
    {
        mn=(wk*2)+1;
        mx=(wk*2)+2;
    }
    else
    {
        mx=mn+2;
    }

    cout<<mn<<" "<<mx<<endl;
    return 0;
}
