#include<bits/stdc++.h>
using namespace std;
long long n,tst,val[26005];
void cal()
{
    val[0]=0;
    for(long long i=1;i<=26000;i++)
    {
        val[i]=(i*(i+1))+(((i-1)*i)/2);
    }
}
int main()
{
    cal();
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long x=n,cnt=0;
        while(x>1)
        {
            long long up=upper_bound(val,val+26000,x)-val;
            //cout<<"up="<<up<<endl;
            //cout<<val[up-1]<<endl;
            x-=val[up-1];
            //cout<<"x="<<x<<endl;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
