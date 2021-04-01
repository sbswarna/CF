#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,n,i,j,f;
    char s[104][104];
    cin>>n>>m;
    getchar();
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>s[i][j];
        }
    }
    f=0;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]!=s[i+1][j])
            {
                f=0;
            }
            else
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        t=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m-1; j++)
            {
                if(s[i][j]==s[i][j+1])
                {
                    t=0;
                }
                else
                {
                    t=1;
                    break;
                }
            }
            if(t==1)
            {
                break;
            }
        }
        if(t==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
