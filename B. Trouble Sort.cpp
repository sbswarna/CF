#include<bits/stdc++.h>
using namespace std;
int tst,n,a[502],b[502],f[502];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        int cntz=0,cnt1=0;
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
            if(f[i]==0)
                cntz++;
            else
                cnt1++;
        }
        sort(b,b+n);
        int fl=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                fl=1;
                break;
            }
        }
        if(fl==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            if(cntz==n||cnt1==n)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}
