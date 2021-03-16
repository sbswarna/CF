#include<bits/stdc++.h>
using namespace std;
int a[100],n,a1,b1;
int main()
{
    cin>>n>>a1>>b1;
    int f=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==2)
            f=1;
    }
    if(f==0)
    {
        for(int i=0,j=n-1; i<n,j>=0; i++,j--)
        {
            if(a[i]!=a[j])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<-1<<endl;
        else
            cout<<0<<endl;
    }
    else
    {
        f=0;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==2)
            {
                if(n%2==1)
                {
                    if(i==(n/2))
                    {
                        if(a1<b1)
                        {
                            a[i]=0;
                            sum+=a1;
                        }
                        else
                        {

                            a[i]=1;
                            sum+=b1;
                        }
                    }
                    else
                    {
                        a[i]=a[n-i-1];
                        if(a[i]==1)
                            sum+=b1;
                        else
                            sum+=a1;
                    }
                }
                else
                {
                    a[i]=a[n-i-1];
                    if(a[i]==1)
                        sum+=b1;
                    else
                        sum+=a1;
                }
            }
        }
        for(int i=0,j=n-1; i<n,j>=0; i++,j--)
        {
            if(a[i]!=a[j])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<-1<<endl;
        else
            cout<<sum<<endl;

    }
}
