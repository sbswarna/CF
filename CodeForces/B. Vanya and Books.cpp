#include<bits/stdc++.h>
using namespace std;
long long n,i,s;
int main()
{
    cin>>n;
    long long p=log10(n);
    //cout<<p<<endl;
    s=0;
    for(i=0;i<p;i++)
    {
        long long a=9*pow(10,i);
        s=s+(a*(i+1));
        //cout<<s<<endl;
    }
    //cout<<s<<endl;
    n=n-s;
    //cout<<n<<endl;
    cout<<s+(n*(p+1))<<endl;
    main();
    return 0;
}
