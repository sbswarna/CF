#include<bits/stdc++.h>
using namespace std;
long long tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n%4==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

