#include<bits/stdc++.h>
using namespace std;
long long tst,h,m;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>h>>m;
        if(h==0&&m==0)
            cout<<0<<endl;
        else
        {
            long long x=24*60;
            cout<<x-((h*60)+m)<<endl;
        }
    }
    return 0;
}
