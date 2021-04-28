#include<bits/stdc++.h>
using namespace std;
long long n,l,a[1005];
int main()
{
    cin>>n>>l;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    double mx=1.00;
    if(a[0]!=0)
        mx=a[0];
    else
        mx=-1.00;
    for(int i=1;i<n;i++)
    {
        double p=((a[i]-a[i-1])*1.00)/2.00;
        mx=max(p,mx);
    }
    if(a[n-1]!=l)
    {
        mx=max(mx,((l-a[n-1])*1.00);
    }
    printf("%.10lf\n",mx);
    return 0;
}
