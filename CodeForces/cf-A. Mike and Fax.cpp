#include<bits/stdc++.h>
using namespace std;
long long i,j,k,p,q,r,l,f,n,t;
    string s;
int main()
{

    cin>>s;
    cin>>n;
    l=s.size();
    t=0;
    f=0;
    p=l/n;
    q=0;
    r=p-1;
    if(p*n!=l)
    {
        t=1;
    }
   else
    {
        for(k=1;k<=n;k++)
   {
       q=(p*(k-1));
        r=(p*k)-1;

       for(i=q,j=r;i<=r,j>=q;i++,j--)
    {
        if(s[i]!=s[j])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        t=1;
        break;
    }
   }
   }
   if(t==0)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
    return 0;
}
