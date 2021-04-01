#include<bits/stdc++.h>
using namespace std;
int a[105],n,sum,sm,mx;
int main()
{
    cin>>n;
    mx=-1;
    sm=0;
    sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        sm+=a[i];
    }
    while(1)
    {
        if(sum>sm)
            break;
        else
        {
            sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=(mx-a[i]);
            }
        }
        mx++;
    }
    cout<<mx-1<<endl;
    //main();
    return 0;
}
