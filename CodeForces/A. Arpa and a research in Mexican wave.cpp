#include<bits/stdc++.h>
using namespace std;
long long n,k,t;
int main()
{
    cin>>n>>k>>t;
    if(t>=1&&t<=k)
        cout<<t<<endl;
    else if(t>=n+1&&t<=n+k)
            cout<<abs(abs(n-t)-k)<<endl;
    else
    {
        cout<<k<<endl;
    }
    //main();
    return 0;
}
