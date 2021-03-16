#include<bits/stdc++.h>
using namespace std;
deque<int>dq;
int tst,n,a;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            cin>>a;
            dq.push_back(a);
        }
        int cnt=0,x,y,alice=0,bob=0;
        while(!dq.empty())
        {
            if(cnt==0)
            {
                alice+=dq.front();
                dq.pop_front();
                cnt++;
                x=alice;
            }
            else
            {
                if(cnt%2==1)
                {
                    y=0;
                    while(y<=x)
                    {
                        y+=dq.back();
                        dq.pop_back();
                        if(dq.size()==0)
                            break;
                    }
                    //cout<<"y="<<y<<endl;
                    bob+=y;
                }
                else
                {
                    x=0;
                    while(x<=y)
                    {
                        x+=dq.front();
                        dq.pop_front();
                        if(dq.size()==0)
                            break;
                    }
                    //cout<<"x="<<x<<endl;
                    alice+=x;
                }
                cnt++;
            }
        }
        cout<<cnt<<" "<<alice<<" "<<bob<<endl;
    }
    return 0;
}
