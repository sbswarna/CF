#include<bits/stdc++.h>
using namespace std;
long long tst,l,r;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>l>>r;
        if(l*2>r)
        {
            cout<<"-1 -1"<<endl;
        }
        else
        {
            cout<<l<<" "<<l*2<<endl;
        }
    }
    return 0;
}
