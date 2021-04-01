#include<bits/stdc++.h>
using namespace std;
int tst,m,n,x;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>x>>m>>n;
        for(int i=1;i<=m;i++)
        {
            if(x<=10)
                break;
            x=((x/2)+10);
        }
        for(int i=1;i<=n;i++)
        {
            x-=10;
        }
        if(x<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
