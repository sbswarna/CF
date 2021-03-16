#include<bits/stdc++.h>
using namespace std;
long long tst,a,b;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b;
        if(a>=b)
        {
            long long x=a%b;
            if(x==0)
                cout<<0<<endl;
            else
            {
                x=a/b;
                x++;
                cout<<(b*x)-a<<endl;
            }
        }
        else
            cout<<b-a<<endl;
    }
    return 0;
}
