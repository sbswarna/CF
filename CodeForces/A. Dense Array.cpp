#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,a[100],cnt=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i]>a[i-1])
                {
                    if(a[i]>a[i-1]*2)
                    {
                        int d=a[i-1];
                        while(d*2<a[i])
                        {
                            d*=2;
                            cnt++;
                        }
                    }
                }
                else
                {
                    if(a[i-1]>a[i]*2)
                    {
                        int d=a[i];
                        while(d*2<a[i-1])
                        {
                            d*=2;
                            cnt++;
                        }
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
