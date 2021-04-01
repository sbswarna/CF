#include<bits/stdc++.h>
using namespace std;
long long tst,n,k;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>k;
        long long x=n;
        if(n%2==1&&k%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(n==k)
            {
                cout<<"YES"<<endl;
                for(int i=1; i<=k; i++)
                    cout<<1<<" ";
                cout<<endl;
            }
            else
            {
                if(k==1)
                {
                    cout<<"YES"<<endl;
                    cout<<n<<endl;
                }
                else
                {
                    long long cnt=0;
                    if(n%2==0)
                    {
                        while(n>0)
                        {
                            n-=2;
                            cnt++;
                            if(cnt==k-1)
                                break;
                        }
                        if(n>0)
                        {
                            cout<<"YES"<<endl;
                            for(int i=1; i<k; i++)
                            {
                                cout<<2<<" ";
                            }
                            cout<<n<<endl;
                        }
                        else
                        {
                            if(k%2==1)
                                cout<<"NO"<<endl;
                            else
                            {
                                cnt=0;
                                while(x>0)
                                {
                                    x-=1;
                                    cnt++;
                                    if(cnt==k-1)
                                        break;
                                }
                                if(x>0)
                                {
                                    cout<<"YES"<<endl;
                                    for(int i=1; i<k; i++)
                                        cout<<1<<" ";
                                    cout<<x<<endl;
                                }
                                else
                                    cout<<"NO"<<endl;
                            }
                        }
                    }
                    else if(n%2==1)
                    {
                        while(n>0)
                        {
                            n-=1;
                            cnt++;
                            if(cnt==k-1)
                                break;
                        }
                        if(n>0)
                        {
                            cout<<"YES"<<endl;
                            for(int i=1; i<k; i++)
                                cout<<1<<" ";
                            cout<<n<<endl;
                        }
                        else
                            cout<<"NO"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
