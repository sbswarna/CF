#include<bits/stdc++.h>
using namespace std;
map<int,int>mpa,mpb;
int tst,a,b,freq[200005],n;
int main()
{
    cin>>n;
    memset(freq,0,sizeof(freq));
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mpa[a]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b;
        mpb[b]=i+1;
    }
    for(int i=1;i<=n;i++)
    {
        int p=++freq[((mpa[i]-mpb[i]+n)%n)];
        mx=max(mx,p);
    }
    cout<<mx<<endl;
    return 0;
}

