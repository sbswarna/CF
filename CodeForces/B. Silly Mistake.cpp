#include<bits/stdc++.h>
using namespace std;
int a[100004],n;
int mp[1000004];
int main()
{
    cin>>n;
    int f=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(a[0]<0)
        cout<<-1<<endl;
    else
    {
        memset(mp,-1,sizeof(mp));
        int cnt=1;
        mp[a[0]]=1;
        for(int i=1; i<n; i++)
        {
            if(a[i]>0)
            {
                if(mp[a[i]]==-1)
                    mp[a[i]]++;
                else if(mp[a[i]]>1||mp[a[i]]==0)
                {
                    cout<<-1<<endl;
                    break;
                }
            }
            else
            {
                if(mp[a[i]]==-1||mp[a[i]]==0)
                {
                    cout<<-1<<endl;
                    break;
                }
                else
                {
                    if(mp[a[i]]==1)
                    {
                        mp[a[i]]=-1;;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
