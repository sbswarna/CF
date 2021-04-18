#include<bits/stdc++.h>
using namespace std;
int n,m, a[105];
int main()
{
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int sum=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]>0||n<=0)
            break;
        else
        {
            sum-=a[i];
        }
        n--;
    }
    cout<<sum<<endl;
    return 0;
}
