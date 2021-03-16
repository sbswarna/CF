#include<bits/stdc++.h>
using namespace std;
int tst,a[200],n,cnto,cnte;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cnto=0,cnte=0;
        int f;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                f=i+1;
                cnte++;
            }
            else
            {
                cnto++;
            }
        }
        if(cnte>0)
        {
            cout<<1<<endl<<f<<endl;
        }
        else
        {
            if(cnto%2==0)
            {
                cout<<cnto<<endl;
                for(int i=0;i<n;i++)
                {
                    cout<<i+1<<" ";
                }
                cout<<endl;
            }
            else
            {
                if(cnto==1)
                    cout<<-1<<endl;
                else
                {
                    cout<<cnto-1<<endl;
                    for(int i=0;i<n-1;i++)
                        cout<<i+1<<" ";
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}
