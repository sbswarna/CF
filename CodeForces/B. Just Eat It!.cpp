#include<bits/stdc++.h>
using namespace std;
long long a[1000007],n,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long sum=0,sum2=0,mx=LONG_LONG_MIN,cnt=0;
        for(long long i=1; i<=n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            sum2+=a[i];
            if(a[i]>0)
                cnt++;
            cout<<sum2<<" ";
            if(sum2>=mx)
            {
                mx=sum2;
            }
            else
            {
                sum2=0;
            }
        }
        cout<<endl;
        cout<<sum<<endl;
        cout<<mx<<endl;
        if(cnt==n)
            cout<<"YES"<<endl;
        else
        {
            if(sum>mx)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
