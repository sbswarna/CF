#include<bits/stdc++.h>
using namespace std;
int tst,n;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        if(n==2)
        {
            cout<<"4 6"<<endl;
        }
        else
        {
            for(int i=2*n;i<=4*n;i+=2)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
