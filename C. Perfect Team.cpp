#include<bits/stdc++.h>
using namespace std;
int tst,c,m,x;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>c>>m>>x;
        int sum=(c+m+x)/3;
        cout<<min(min(sum,c),m)<<endl;
    }
    return 0;
}
