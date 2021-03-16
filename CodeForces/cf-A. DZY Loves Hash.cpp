#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[350],i,f,p,n,d[350],j,q,mn;
    cin>>p>>n;
    mn=9999999999999;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        q=a[i]%p;
        d[i]=q;

    }
    /*for(i=1;i<=n;i++)
        cout<<i<<" "<<d[i]<<endl;*/
   for(i=1;i<=n;i++)
   {
       for(j=i+1;j<=n;j++)
       {
           if(d[i]==d[j])
           {
               mn=min(mn,j);
           }
       }
   }
    if(mn==9999999999999)
        cout<<-1<<endl;
    else
        cout<<mn<<endl;
    return 0;
}
