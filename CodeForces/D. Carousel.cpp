#include<bits/stdc++.h>
using namespace std;
int tst,a[200004],color[200005],n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i]!=a[i-1])
                {
                    cnt++;
                }
            }
        }
        if(cnt==0)
        {
            cout<<"1"<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<"1 ";
            }
            cout<<endl;
        }
        else
        {
            int cnt=2;
            for(int i=0; i<n-1; i++)
            {
                if(i%2==0)
                {
                    color[i]=1;
                }
                else
                {
                    color[i]=2;
                }
            }
            if(a[n-1]!=a[n-2])
            {
                if(color[n-2]!=2)
                {
                    color[n-1]=2;
                }
                else
                {
                    if(a[n-1]!=a[0])
                    {
                        cnt++;
                        color[n-1]=3;
                    }
                    else
                    {
                        color[n-1]=1;
                    }
                }
            }
            else
            {
                if(a[n-1]!=a[0])
                {
                    if(color[n-2]==color[0])
                    {
                        color[n-1]=2;
                    }
                    else
                    {
                         color[n-1]=color[n-2];
                    }
                }
                else
                {
                    color[n-1]=1;
                }
            }
            cout<<cnt<<endl;
            for(int i=0;i<n;i++)
                cout<<color[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
