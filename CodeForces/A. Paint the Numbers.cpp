#include<bits/stdc++.h>
using namespace std;
int a[1005],n;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        //cout<<a[i]<<endl;
        if(a[i]!=-1)
            cnt++;
        if(a[i]!=-1)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[j]!=-1)
                {
                    if(a[j]%a[i]==0)
                    {
                        a[j]=-1;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
