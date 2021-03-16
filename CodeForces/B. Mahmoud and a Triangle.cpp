#include<bits/stdc++.h>
using namespace std;
long long a[1000005],n;
int main()
{
    cin>>n;
    for(long long i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int f=0;
    for(long long i=n-1; i>=2; i--)
    {
        long long p=a[i],q=a[i-1],r=a[i-2];
        if(p<=q+r&&q<=p+r&&r<=p+q)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
