#include<bits/stdc++.h>
using namespace std;
long long tst,n,x,i,sum;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        sum=0;
        x=n/2;
        if(x%2==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=2;i<=n;i+=2)
            {
                sum+=i;
                cout<<i<<" ";
            }
            long long y=1;
            for(i=1;i<x;i++)
            {
                cout<<y<<" ";
                sum-=y;
                y+=2;
            }
            cout<<sum<<endl;
        }
    }
}
