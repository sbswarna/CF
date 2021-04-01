#include<bits/stdc++.h>
using namespace std;
int l1,l2,r1,r2,x,y,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>l1>>r1>>l2>>r2;
        x=l1;
        if(l2!=x)
            y=l2;
        else if(r2!=x)
            y=r2;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
