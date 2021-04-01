#include<bits/stdc++.h>
using namespace std;
long long tst,n,cnt;
vector<int>v;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        cnt=0;
        long long x=n,a=10;
        while(x>0)
        {
            long long p=x%10,t=1;
            for(int i=1;i<=cnt;i++)
            {
                t=t*10;
            }
            long long y=(p)*t;
            x=x/10;
            if(y!=0)
            v.push_back(y);
            cnt++;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<< " ";
        cout<<endl;
        v.clear();
    }
    return 0;
}
