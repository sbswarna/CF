#include<bits/stdc++.h>
using namespace std;
long long a[1003][1003],n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        long long gcd=a[i][0];
        for(int j=0;j<n;j++)
        {
            gcd=__gcd(gcd,a[i][j]);
        }
        if(i!=n-1)
            cout<<gcd<<" ";
        else
            cout<<gcd<<endl;
    }
    return 0;
}
