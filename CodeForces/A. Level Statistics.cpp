#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,a,b,x,y,f=0;
        cin>>n;
        cin>>a>>b;
        x=a;
        y=b;
        if(x<y)
            f=1;
        for(int i=2;i<=n;i++)
        {
            cin>>a>>b;
            if(a<x||b<y||(a==x&&b!=y)||a<b||a-x<b-y)
                f=1;
            x=a;
            y=b;
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
