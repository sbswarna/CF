#include<bits/stdc++.h>
using namespace std;
long long f=0,a[10][10],i,j,c=0;
int main()
{
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=4; j++)
        {
            if(i==3)
            {
                if(a[j][i]==1)
                {
                    long long q;
                    if(j+1>4)
                    {
                        q=j+1-4;
                    }
                    else
                    {
                        q=j+1;
                    }
                    if(a[j][4]==1||a[q][4]==1)
                    {
                        c++;
                    }
                }
            }
            else if(i==2)
            {
                if(a[j][i]==1)
                {
                    long long q;
                    if(j+2>4)
                    {
                        q=j-2;
                    }
                    else
                    {
                        q=j+2;
                    }
                    if(a[j][4]==1||a[q][4]==1)
                    {
                        c++;
                    }
                }
            }
            else
            {
                if(a[j][i]==1)
                {
                    if(a[j][4]==1)
                    {
                        c++;
                    }
                    if(j==1)
                    {
                        if(a[4][4]==1)
                        {
                            c++;
                        }
                    }
                    else if(j==2)
                    {
                        if(a[1][4]==1)
                        {
                            c++;
                        }
                    }
                    else if(j==3)
                    {
                        if(a[2][4]==1)
                        {
                            c++;
                        }
                    }
                    else
                    {
                        if(a[3][4]==1)
                        {
                            c++;
                        }
                    }
                }
            }
            if(c>0)
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
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
