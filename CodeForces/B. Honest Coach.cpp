#include<bits/stdc++.h>
using namespace std;
int tst,a[100],n,mn;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mn=INT_MAX;
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                mn=min(mn,(a[j]-a[i]));
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
