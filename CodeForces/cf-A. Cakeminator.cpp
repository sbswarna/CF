#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,c,cake,i,j,p,f,sum,a[11],k;
    char s[13][13];
    cin>>r>>c;
    cake=0;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>s[i][j];
        }
    }
    f=0;
    for(i=0; i<r; i++)
    {
        f=0;
        for(j=0; j<c; j++)
        {
            if(s[i][j]=='S')
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            for(k=0; k<c; k++)
            {
                s[i][k]='a';
                cake++;
            }
        }
    }
    f=0;
    for(i=0; i<c; i++)
    {
        f=0;
        for(j=0; j<r; j++)
        {
            if(s[j][i]=='S')
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            for(k=0; k<r; k++)
            {
                if(s[k][i]!='a')
                {
                    cake++;
                }
            }
        }
    }

    cout<<cake<<endl;
    return 0;
}
