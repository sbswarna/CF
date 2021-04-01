#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>a>>b>>q;
        for(int i=1;i<=q;i++)
        {
            cin>>l>>r;
            if(a==b)
                cout<<0<<endl;
            else
            {
                if(l<=a&&l<=b&&r<=a&&r<=b)
                    cout<<0<<endl;
                else
                {

                }
            }
        }
    }
    return 0;
}
