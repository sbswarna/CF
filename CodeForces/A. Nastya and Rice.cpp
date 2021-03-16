#include<bits/stdc++.h>
using namespace std;
long long tst,n,a,b,c,d;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>a>>b>>c>>d;
        if(n*(a-b)>c+d)
        {
            cout<<"NO"<<endl;
        }
        else if(n*(a+b)<c-d)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
