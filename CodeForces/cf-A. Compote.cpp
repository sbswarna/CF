#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,ans,i,r;
    cin>>a>>b>>c;

    ans=0;
    for(i=1;i<=a;i++)
    {
        if(b/2>0&&c/4>0)
        {
            ans=ans+7;
            b=b-2;
            c=c-4;
        }
    }
    cout<<ans<<endl;
    return 0;
}
