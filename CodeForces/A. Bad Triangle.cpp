#include<bits/stdc++.h>
using namespace std;
int tst,n,a[500005];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int f=0;
        for(int i=0; i<n-2; i++)
        {
            int p=a[i]+a[i+1];
            int q=a[i]+a[i+2];
            int r=a[i+1]+a[i+2];
            int s=a[i]+a[i+1];
            if(p<=a[i+2]||q<=a[i+1]||r<=a[i]||s<=a[n-1-i])
            {
                cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
