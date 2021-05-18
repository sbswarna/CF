#include<bits/stdc++.h>
using namespace std;
int tst,a[55],b[55],n;
void F()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif 
}
int main()
{
    F();
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int f=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
            if(a[i]!=i)
            {
                f=1;
            }
        }
        if(f==0)
            cout<<0<<endl;
        else
        {
            f=0;
           if(a[1]==1)
           {
                cout<<1<<endl;
           }
           else
           {
               if(a[n]==1&&a[1]==n)
               {
                    cout<<3<<endl;
               }
               else
               {
                cout<<2<<endl;
            }
           }
        }
    }
    return 0;
}