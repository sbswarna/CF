#include<bits/stdc++.h>
using namespace std;
long long n,a[100005][10],freq[100004],ans[100005];
int main()
{
    cin>>n;
    for(long long i=0; i<n-2; i++)
    {
        for(long long j=0; j<3; j++)
        {
            cin>>a[i][j];
            freq[a[i][j]]++;
        }
    }
    int f=0,g=0;
    long long p,q,r,s;
    long long k=2;
    for(long long i=0; i<=100001; i++)
    {
        if(freq[i]==1&&f==0)
        {
            p=i;
            freq[i]--;
            f=1;
        }
        else if(freq[i]==1&&f==1)
        {
            q=i;
            freq[i]--;
            f=3;
        }
        if(freq[i]==2&&g==0)
        {
            r=i;
            g=1;
            freq[i]-=2;
        }
        else if(freq[i]==2&&g==1)
        {
            s=i;
            freq[i]-=2;
            g=3;
        }
        else if(freq[i]==3)
        {
            ans[k++]=i;
            freq[i]-=3;
        }
    }
    for(long long i=0; i<=100001; i++)
    {
        if(freq[i]!=0)
        {
            ans[k++]=i;
        }
    }
    //cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
    ans[0]=p;
    ans[1]=r;
    ans[n-1]=q;
    ans[n-2]=s;
    for(long long i=0; i<n; i++)
    {
        cout<<ans[i];
        if(i!=n-1)
            cout<<" ";
        else
            cout<<endl;
    }
    return 0;
}
