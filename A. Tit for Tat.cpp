#include<bits/stdc++.h>
using namespace std;
long long a[105],n,tst,k;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]-k>=0)
            {
                a[i]-=k;
                a[n-1]+=k;
                k=0;
            }
            else
            {
                a[n-1]+=a[i];
                k-=a[i];
                a[i]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
