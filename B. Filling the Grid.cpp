#include<bits/stdc++.h>
using namespace std;
int a[1005]= {0},b[1005]= {0},r,c;
int main()
{
    cin>>r>>c;
    int mula=0,mulb=0;
    for(int i=0; i<r; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<c; i++)
    {
        cin>>b[i];
    }
    mulb=(a[0]%1000000007*b[0]%1000000007)%1000000007;
    for(int i=1; i<max(r,c); i++)
    {
        mula=(a[i]%1000000007*b[i]%1000000007)%1000000007;
        cout<<mula<<endl;
        mulb*=(mulb%1000000007/mula%1000000007)%1000000007;
        cout<<mulb<<endl;
    }
    cout<<mulb<<endl;
    return 0;
}

