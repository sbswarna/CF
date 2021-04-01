#include<bits/stdc++.h>
using namespace std;
long long r,d,c,j,n;
int main()
{
    cin>>r>>d;
    cin>>n;
    c=0;
    long long i,p,q,x,y,r1;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y>>r1;
        if(((sqrt((x*x)+(y*y))-(r-d)>=r1))&&(sqrt((x*x)+(y*y))+r1<=r))
            c++;
    }
    cout<<c<<endl;
    //main();
    return 0;
}
