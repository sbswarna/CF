#include<bits/stdc++.h>
using namespace std;
int tst,n,a[100];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int ev=0,od=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                ev++;
            else
                od++;
        }
        if(ev%2==0&&od%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int f=0;
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(abs(a[i]-a[j])==1)
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
