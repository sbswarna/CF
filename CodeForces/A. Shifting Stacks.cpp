#include<bits/stdc++.h>
using namespace std;
long long tst,a[120],n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
       cout<<sum<<endl;
    }
    return 0;
}
