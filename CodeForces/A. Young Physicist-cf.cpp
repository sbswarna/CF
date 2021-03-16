#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,z,a,b,c,i;
    cin>>n;
    x=0;
    y=0;
    z=0;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        x=x+a;
        y=y+b;
        z=z+c;
    }
    if(x==0&&y==0&&z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

return 0;
}
