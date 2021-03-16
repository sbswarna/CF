#include<bits/stdc++.h>
using namespace std;
priority_queue<long long>pqmx,pqmn;
long long a,n;
int main()
{
    cin>>n;
    pqmn=priority_queue<long long>();
    pqmx=priority_queue<long long>();
    for(long long i=1;i<=n;i++)
    {
        cin>>a;
        pqmx.push(a);
        pqmn.push(a*-1);
    }
    n=n/2;
    long long i=0;
    long long sum=0;
    for(i=1;i<=n;i++)
    {

        sum+=((pqmx.top()+(pqmn.top()*(-1)))*(pqmx.top()+(pqmn.top()*(-1))));
        pqmn.pop();
        pqmx.pop();
    }
    cout<<sum<<endl;
    return 0;
}
