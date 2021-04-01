#include<bits/stdc++.h>
using namespace std;
long long tst,n,a[100003];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(long long i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
