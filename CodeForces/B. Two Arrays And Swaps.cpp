#include<bits/stdc++.h>
using namespace std;
int tst,n,k,a[100],b[100];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0; i<k; i++)
        {
            if(a[i]<b[n-i-1])
                swap(a[i],b[n-i-1]);
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
