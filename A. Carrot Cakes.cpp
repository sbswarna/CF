#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,t,k,d;
    cin>>n>>t>>k>>d;
   long long p=(t/k)*n;
    if(p*n!=(t/k))
    {
        p=p+1;
    }
    //p=p*t;
    if(p>t+d)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   main();
    return 0;
}
/*#include<bits/stdc++.h>
//scanf
#define ins(a) scanf("%s", a)
#define ini(a) scanf("%d",&a)
#define in(a) scanf("%I64d", &a)
//datatype
#define ll long long
//print
#define out(a) printf("%I64d\n", a)
#define f(i,j) for(i=0; i<j; i++)

using namespace std;
int main()
{
    ll n, t, k, d;
    in(n);
    in(t);
    in(k);
    in(d);
    ll x=ceil((n*1.0)/k);
    x=t*x;
    if(d+t<x)
        printf("YES\n");
    else
        printf("NO\n");
        main();
    return 0;
}*/
