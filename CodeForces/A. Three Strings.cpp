#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            {
                if(c[i]==b[i])
                {
                    a[i]=c[i];
                    c[i]=a[i];
                }
            }
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            {
                if(c[i]==a[i])
                {
                    b[i]=c[i];
                    c[i]=b[i];
                }
            }
        }
        if(b==a)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
