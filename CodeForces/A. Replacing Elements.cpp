#include<bits/stdc++.h>
using namespace std;
int n,d,cnt,a[200],f,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>d;
        cnt=0,f=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>d)
                f=1;
        }
        if(f==1)
        {
            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(a[i]+a[j]<=d)
                        cnt++;
                }
            }
            if(cnt>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
