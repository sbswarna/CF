#include<bits/stdc++.h>
using namespace std;
int c[1002],n,a[1002];
vector<int>v;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        int j=i;
        memset(c,0,sizeof(c));
        c[i]++;
        while(1)
        {
            c[a[j]]++;
            if(c[a[j]]>=2)
            {
                v.push_back(a[j]);
                break;
            }
            j=a[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        cout<<v[i]<<" ";
        else
            cout<<v[i]<<endl;
    }
    return 0;
}
