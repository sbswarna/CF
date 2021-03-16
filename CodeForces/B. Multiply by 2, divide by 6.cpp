#include<bits/stdc++.h>
using namespace std;
long long cnt,n,tst;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cnt=0;
        int f=0;
        while(n>1)
        {
            if(n%3==0)
            {
                if(n%6==0)
                {
                    n=n/6;
                    cnt++;
                }
                else
                {
                    n*=2;
                       cnt++;
                }
            }
            else
            {
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;

    }
    return 0;
}
