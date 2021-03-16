#include<bits/stdc++.h>
using namespace std;
long long a[2005],i,n,d;
int main()
{
    cin>>n>>d;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    long long c=0,c1=0;
    for(i=1; i<n; i++)
    {
        if(a[i]-a[i-1]<0)
        {
            long long x=a[i-1]-a[i]+d;
            cout<<x<<endl;
            a[i]=a[i]+x;
            x=ceil(x/d);
            c=c+x;
        }
        else if(a[i]-a[i-1]==0)
        {
            c++;
            a[i]=a[i]+d;
        }
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
    cout<<c<<" "<<c1<<endl;
    //main();
    return 0;
}
