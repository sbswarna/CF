#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,cnt,m,i,n;
    cin>>a>>b>>c;
    cin>>n;
    cnt=0;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        if(m>b&&m<c)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    //main();
    return 0;
}
