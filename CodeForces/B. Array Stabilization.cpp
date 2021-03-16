#include<bits/stdc++.h>
using namespace std;
int a[1000004],n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<min(a[n-2]-a[0],a[n-1]-a[1])<<endl;
    return 0;
}
