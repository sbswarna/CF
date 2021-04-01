#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin>>n;
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dif[i-1]=a[i]-a[i-1];
    }

}
