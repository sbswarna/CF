#include<bits/stdc++.h>
using namespace std;
long long tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n%3==0)
            cout<<n/3<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
