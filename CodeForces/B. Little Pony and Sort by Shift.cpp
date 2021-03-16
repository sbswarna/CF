#include<bits/stdc++.h>
using namespace std;
long long a[100002],b[100002],n,pos,mx;
vector<long long>v[10];
int main()
{
    cin>>n;
    cin>>a[0];
    int c=0;
    for(int i=1; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<a[i-1]&&c==0)
        {
            pos=i;
            c=1;
        }
    }
    //cout<<pos<<endl;
    if(c==1)
    {
        int f=0;
        if(a[0]>=a[pos]&&a[n-1]<=a[0])
        {
        for(int j=pos+1; j<n; j++)
        {
            if(a[j]<a[j-1])
            {
                f=1;
                  break;
            }
        }
        if(f==1)
            cout<<-1<<endl;
        else
        {
            cout<<n-pos<<endl;
        }
        }
        else
            cout<<-1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    main();
    return 0;
}
