#include<bits/stdc++.h>
using namespace std;
double a,s,t,k,n;
int main()
{
    cin>>n>>k;
    long long i;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        s=s+a;
    }
    t=ceil(s/n);
    for(i=1;i;i++)
    {
        if(t>=k)
        {
            break;
        }
        else
        {
            n=n+1;
            s=s+k;
            //cout<<s<<" "<<n<<endl;
            t=ceil(s/n);
            cout<<t<<endl;
        }
    }
    cout<<i+1<<endl;
    main();
    return 0;
}
