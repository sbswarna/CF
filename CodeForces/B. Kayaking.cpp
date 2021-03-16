#include<bits/stdc++.h>
using namespace std;
vector<pair<int,pair<int,int> > >v;
int n,a[150],vis[150];
int main()
{
    cin>>n;
    for(int i=0; i<2*n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+(2*n));
    for(int i=0; i<2*n; i++)
    {
        for(int j=i+1; j<2*n; j++)
        {
            v.push_back(make_pair(abs(a[i]-a[j]),make_pair(i,j)));
        }
    }
    int sum=0,cnt;
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        cnt=0;
        int w=v[i].first;
        int x=v[i].second.first;
        int y=v[i].second.second;
//        for(int j=0; j<2*n; j++)
//            cout<<a[j]<<" ";
//        cout<<endl;
        for(int j=0; j<(2*n); j++)
        {
            if(a[j]==-1)
                cnt++;
        }
        if((cnt/2)==n-1)
            break;
        else
        {
            if(a[x]!=-1&&a[y]!=-1)
            {
                sum+=w;
                a[x]=-1;
                a[y]=-1;
            }
        }
    }
    cout<<sum<<endl;
    v.clear();
    return 0;
}
/*
4
9 3 5 2 8 100 3 4
*/
