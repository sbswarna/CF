#include<bits/stdc++.h>
using namespace std;
int tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        int a,b,c,d,x,y,k;
        cin>>a>>b>>c>>d>>k;
        if(a%c==0)
        {
            x=a/c;
        }
        else
        {
            x=(a/c)+1;
        }
        if(b%d==0)
        {
            y=b/d;
        }
        else
        {
            y=(b/d)+1;
        }
        if(x+y<=k)
            cout<<x<<" "<<y<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
