#include<bits/stdc++.h>
using namespace std;
long long n,a[200004];
vector<long long>v;
int main()
{
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    v.push_back(a[0]);
    long long mx=a[0];
    for(long long i=1;i<n;i++)
    {
        v.push_back(mx+a[i]);
        mx=max(mx,v[i]);
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
