#include<bits/stdc++.h>
using namespace std;
int mn,y,b,r;
int main()
{
    cin>>y>>b>>r;
    mn=999999;
    mn=min(y,min(r,b));
    if(mn==y)
    {
        cout<<y<<" "<<y+1<<" "<<y+2<<endl;
    }
    else if(mn==b)
    {
        cout<<b-1<<" "<<b<<" "<<b+1<<endl;
    }
    else
    {
        cout<<r-2<<" "<<r-1<<" "<<r<<endl;
    }
    return 0;
}
