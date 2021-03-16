#include<bits/stdc++.h>
using namespace std;
long long k2,k3,k5,k6,mn,mn2;
int main()
{
    cin>>k2>>k3>>k5>>k6;
    mn=min(k2,min(k5,k6));
    k2-=mn;
    mn2=min(k2,k3);
    cout<<(mn*256)+(mn2*32)<<endl;
    return 0;
}
