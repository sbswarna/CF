#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>d;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[1]>=d)
        {
            a[0]+=d;
            cout<<a[0]<<endl;
        }
        else
        {

        }
    }
    return 0;
}
