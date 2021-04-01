#include<bits/stdc++.h>
using namespace std;
int tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cout<<1;
            if(i!=n)
                cout<<" ";
            else
                cout<<endl;
        }
    }
    return 0;
}
