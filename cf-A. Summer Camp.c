#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,a,n,d;
    char s[1010];d=0;
    for(i=1;i<1000;i++)
    {
        for(j=1;j;j++)
        {
        n=i;
        a=n%10;
        s[d]=a+'0';
        d++;
        n=n/10;
        if(n==0)
        {
            s[d]=n%10+'0';
            break;
        }
        }
        if(d==1001)
        {
            break;
        }

    }
}
