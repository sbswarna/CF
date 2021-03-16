#include<bits/stdc++.h>
using namespace std;
int tst,m,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m;
        if(n%m==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
