#include<bits/stdc++.h>
using namespace std;
long long tst,n;
map<long long,long long>sum;
void cal()
{
    sum[1]=0;
    for(long long i=3; i<=500001; i+=2)
    {
        long long p=i*i;
        long long q=(i-2)*(i-2);
        long long r=p-q;
        long long s=r*(i/2);
        //cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
        //cout<<"prev sum "<<sum[i-2]<<endl;
        sum[i]=sum[i-2]+s;
        //cout<<"cur sum "<<sum[i]<<endl;
    }
}

int main()
{
    cal();
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cout<<sum[n]<<endl;
    }
    return 0;
}
