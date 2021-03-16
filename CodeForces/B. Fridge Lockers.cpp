#include<bits/stdc++.h>
using namespace std;
int a[1004],m,n,tst;
pair<int,int>p[1003];
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            p[i].first=a[i];
            p[i].second=i+1;
        }
        sort(p,p+n);
        if(m<n||n==2)
        {
            cout<<-1<<endl;
        }
        else
        {
            int cost=0;
            vector<pair<int,int> >v;
            for(int i=0; i<n-1; i++)
            {
                v.push_back(make_pair(p[i].second,p[i+1].second));
                cost+=(p[i].first+p[i+1].first);
            }
            cost+=(p[0].first+p[n-1].first);
            v.push_back(make_pair(p[0].second,p[n-1].second));
            m=m-n;
            if(m!=0)
            {
                while(m!=0)
                {
                    v.push_back(make_pair(p[0].second,p[1].second));
                    cost+=p[0].first+p[1].first;
                    m--;
                }
            }
            cout<<cost<<endl;
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i].first<<" "<<v[i].second<<endl;
            }
        }
    }
    return 0;
}
