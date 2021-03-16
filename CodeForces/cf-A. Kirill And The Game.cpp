#include<bits/stdc++.h>
using namespace std;
long long x,y,l,r,k,i,j,f;
int main()
{
    cin>>l>>r>>x>>y>>k;
    f=0;
    for(i=x; i<=y; i++)
    {
        if((k*i)>=l&&(k*i)<=r)
        {
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
