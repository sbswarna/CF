#include<bits/stdc++.h>
using namespace std;
long long tst,x,y,z,a,b,c;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>x>>y>>z;
        if(x==y&&y==z)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else
        {
            int f=0;
            if(x==y||y==z||z==x)
            {
                f=1;
            }
            if(f==0)
                cout<<"NO"<<endl;
            else
            {
                b=x;
                c=y;
                if(max(b,c)==z)
                {
                    if(b>c)
                        a=c;
                    else
                        a=b;
                    cout<<"YES"<<endl;
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }

        }
    }
    return 0;
}
