#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,c,b,k,v,n;
    cin>>k>>a>>b>>v;
    c=0;
    n=1;
    long long p=2;
    while(a>0)
    {
       if(k>=b+1)
       {
           a=a-((b+1)*v);
           b=0;
           c++;
       }
       else
       {
           a=a-(k*v);
           b=b-k+1;
           if(b<=0)
           {
               p=1;
           }
           c++;
       }
    }
    cout<<c<<endl;
   // main();
    return 0;
}
