#include<bits/stdc++.h>
using namespace std;
int l,r,i,j;
int main()
{
    cin>>l>>r;
    for(i=l; i<=r; i++)
    {
        int x=i;
        int digit[15]={0};
        int f=0;
        while(x>0)
        {
            int p=x%10;
            x=x/10;
            digit[p]++;
        }
        for(j=0;j<=9;j++)
        {
            if(digit[j]>0)
            {
                if(digit[j]>1)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    if(i>r)
    cout<<-1<<endl;
}
