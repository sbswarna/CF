#include<bits/stdc++.h>
using namespace std;
int prime[100002],n,ans[100002];
int main()
{
    for(int i=4; i<=100002; i+=2)
    {
        prime[i]=1;
    }
    prime[1]=1;
    prime[0]=1;
    for(int i=3; i<=sqrt(100002); i+=2)
    {
        for(int j=i*i; j<=100001; j+=i)
        {
            prime[j]=1;
        }
    }
    cin>>n;
    for(int i=2; i<=n+1; i++)
    {
        if(prime[i]==0)
            ans[i]=1;
        else
        {
            ans[i]=2;
        }
    }
    if(n>2)
        cout<<2<<endl;
    else
        cout<<1<<endl;
    for(int i=2; i<=n+1; i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
