#include<bits/stdc++.h>
using namespace std;
long long p,q,a,c,cnt,v0,v1,l,i;
int main()
{
    cin>>c>>v0>>v1>>a>>l;
    cnt=1;
    p=v0;
    for(i=1;i;i++)
    {
        if(p>=c)
    {
        break;
    }
    else
    {
    q=v0+(i*a);
    //cout<<q<<" ";
    if(q>v1)
    {
        q=v1;
    }
    p=p+q-l;
    //cout<<p<<endl;
    cnt++;
    }
    }
    cout<<cnt<<endl;
    //main();
    return 0;
}
