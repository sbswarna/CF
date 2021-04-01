#include<bits/stdc++.h>
using namespace std;
int tst,a[1000],n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]==1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
