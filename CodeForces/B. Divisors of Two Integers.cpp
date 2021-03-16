#include<bits/stdc++.h>
using namespace std;
int a[150],f[100003],mx,mx1,n;
int main()
{
    cin>>n;
    mx=-1;
    mx1=-1;
    memset(f,0,sizeof(f));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(mx%a[i]==0&&f[a[i]]!=-1)
        {
            f[a[i]]=-1;
            a[i]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            mx1=max(mx1,a[i]);
        }
    }
    cout<<mx<<" "<<mx1<<endl;
    return 0;
}
