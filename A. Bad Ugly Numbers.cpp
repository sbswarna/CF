#include<bits/stdc++.h>
using namespace std;
int tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<2;
            for(int i=1;i<n;i++)
            {
                cout<<3;
            }
            cout<<endl;
        }
    }
    return 0;
}
