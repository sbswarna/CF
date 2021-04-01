#include<bits/stdc++.h>
using namespace std;
long long n,tst;
long long digi(long long num)
{
    long long x=num,f=0;
    while(x>0)
    {
        long long p=x%10;
        if(p>0)
        {
            if(n%p>0)
            {
                f=1;
                break;
            }
        }
        x=x/10;
    }
    return f;
}
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long a=digi(n);
        if(a==0)
        {
            cout<<n<<endl;
        }
        else
        {
            while(1)
            {
                n++;
                a=digi(n);
                if(a==0)
                {
                    cout<<n<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
