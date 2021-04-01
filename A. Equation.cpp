#include<bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    cin>>n;
    if((n+4)%2==0)
    {
        cout<<n+4<<" "<<4<<endl;
    }
    else
    {
        cout<<n+15<<" "<<15<<endl;
    }
    return 0;
}
