#include<bits/stdc++.h>
using namespace std;
long long tst,n,a[2000004];
deque<long long>dq;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            dq.push_back(a[i]);
        }
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(n==2)
        {
            if(a[0]==a[1])
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
        else
        {
            int cnt=0;
            while(true)
            {
                int x=dq.front();
                dq.pop_front();
                int y=dq.front();
                dq.pop_front();
                if(x==y)
                {
                    dq.push_front(x);
                    dq.push_back(y);
                }
            }
        }
        dq.clear();
    }
    return 0;
}
