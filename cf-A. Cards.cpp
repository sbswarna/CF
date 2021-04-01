#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[110],i,j,c,d,s,p,n;
    cin>>n;
    s=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    //printf("s=%lld\n",s);
    s=s/(n/2);
    for(i=1; i<=n; i++)
    {
        if(a[i]!=0)
        {
            for(j=i+1; j<=n; j++)
            {
                if(a[j]!=0)
                {
                    p=a[i]+a[j];
                    if(p==s)
                    {
                        cout<<i<<" "<<j<<endl;
                        a[i]=0;
                        a[j]=0;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
