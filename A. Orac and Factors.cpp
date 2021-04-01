#include<bits/stdc++.h>
using namespace std;
long long n,k,a[1000004],tst;
void sieve()
{
    a[0]=1;
    a[1]=1;
    for(long long i=4; i<=1000000; i=i+2)
    {
        a[i]=1;
    }
    for(long long i=3; i<=sqrt(1000000); i=i+2)
    {
        for(long long j=i*i; j<=1000000; j=j+i)
        {
            a[j]=1;
        }
    }
}
int main()
{
    sieve();
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<n+(k*2)<<endl;
        }
        else
        {
            if(a[n]==1)
            {
                long long p=sqrt(n);
                if(p*p==n)
                {
                    if(a[p]!=1)
                    {
                        cout<<n+p+((k-1)*2)<<endl;
                    }
                    else
                    {
                        long long i=3;
                        while(true)
                        {
                            if(n%i==0)
                            {
                                cout<<n+i+((k-1)*2)<<endl;
                                break;
                            }
                            i++;
                        }
                    }
                }
                else
                {
                    long long i=3;
                    while(true)
                    {
                        if(n%i==0)
                        {
                            cout<<n+i+((k-1)*2)<<endl;
                            break;
                        }
                        i++;
                    }
                }
            }
            else
            {
                cout<<n+n+((k-1)*2)<<endl;
            }
        }
    }
    return 0;
}
