#include<bits/stdc++.h>
using namespace std;
int k,a,d,n;
int main()
{
    cin>>k>>a>>d>>n;
    int c=0;
    int f=0;
    while(a>=0)
    {
        if(k<=d)
        {
            d-=k;
            a-=(n*(k));
            c++;
        }
        else
        {
            if(f==0)
            {
                a-=(n*(d+1));
                f=1;
                c++;
            }
            else
            {
                a-=n;
                c++;
            }
        }
    }
    cout<<c<<endl;
    main();
    return 0;
}
