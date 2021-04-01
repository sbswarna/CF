#include<bits/stdc++.h>
using namespace std;
long long tst,A,B,n,a[1000005],b[1000005];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>A>>B>>n;
        for(long long i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(long long i=0; i<n; i++)
        {
            cin>>b[i];
        }
        long long f=0;
        for(long long i=0; i<n; i++)
        {
            if(B>0)
            {
                long long p=b[i]/A;
                if(p==0)
                    p=1;
                else
                {
                    if(b[i]%A>0)
                    {
                        if(B-(a[i]*(p+1))>0)
                            p++;
                    }
                }
                /*cout<<"p="<<p<<endl;
                cout<<"A="<<A<<endl;
                cout<<"A*p="<<A*p<<endl;*/
                b[i]-=(A*p);
                B-=(a[i]*p);
            }
            //cout<<"b[i]="<<b[i]<<endl;
            if(b[i]>0&&B<=0)
                f=1;
            //cout<<"B="<<B<<endl;
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
/*
21
488596 689350 4
965685 728532 277071 442097
419260 459335 670816 32198
999 999 1
1000
1000
*/
