#include<bits/stdc++.h>
using namespace std;
long long tst,a,b,c,ans1,ans2;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b>>c;
        if(a<c)
            ans1=1;
        else
        {
            ans1=-1;
        }
        if(c<a)
        {
            ans2=b;
        }
        else
        {
            if(b*a<=c)
            {
                ans2=-1;
            }
            else
            {
                ans2=b;
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}
