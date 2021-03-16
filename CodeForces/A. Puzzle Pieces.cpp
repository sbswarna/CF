#include<bits/stdc++.h>
using namespace std;
int tst,n,m;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m;
        if(n==2&&m==2||n==1||m==1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
