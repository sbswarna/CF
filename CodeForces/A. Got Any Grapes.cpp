#include<bits/stdc++.h>
using namespace std;
long long a,b,c,x,y,z,f;
int main()
{
    f=0;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(x<=a)
    {
        a-=x;
    }
    else
    {
        f=-1;
    }
    a+=b;
    if(a>=y)
    {
        a-=y;
    }
    else
    {
        f=-1;
    }
    if(a+c<z)
        f=-1;
    if(f==-1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
