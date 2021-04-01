#include<bits/stdc++.h>
using namespace std;
long long n,tst;
set<long long>s;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        long long cnt=0;
        s.insert(0);
        for(long long i=1; i<=sqrt(n); i++)
        {
            long long x=n/i;
            s.insert(i);
            s.insert(x);
        }
        cout<<s.size()<<endl;
        set<long long>::iterator it;
        for(it=s.begin(); it!=s.end(); it++)
            cout<<(*it)<<" ";
        cout<<endl;
        s.clear();
    }
    return 0;
}
