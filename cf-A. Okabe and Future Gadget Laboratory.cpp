#include<bits/stdc++.h>
using namespace std;
long long i,j,k,l,m,n,a[55][55],q,x,y,cnt;
int main()
{
    cin>>n;
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]>1)
                k++;
        }
    }
    cnt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            long long f=0;
            if(a[i][j]>1)
            {
                long long t=a[i][j];
                for(x=0;x<n;x++)
                {
                    long long q=t-a[i][x];
                    for(y=0;y<n;y++)
                    {
                        if(q==a[y][j])
                        {
                            //cout<<t<<" "<<q<<" "<<a[y][i]<<endl;
                            f=1;
                            break;
                        }
                    }
                    if(f==1)
                        break;
                }
            }
            if(f==1)
                cnt++;
        }
    }
    //cout<<k<<endl;
    if(cnt==k)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
   // main();
    return 0;
}
