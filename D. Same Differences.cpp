#include<bits/stdc++.h>
using namespace std;
int tst,n,a[200005];
void F()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif 
}
int main(int argc, char const *argv[])
{
	F();
	cin>>tst;
	while(tst--)
	{
		cin>>n;
		map<long long,long long>mp;
		long long cnt=0;
		set<long long> st;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			int p=(a[i]-i);
			if(mp.find(p)!=mp.end())
				mp[p]++;
			else
				mp[p]=1;				
		}
		for(int i=1;i<=n;i++)
		{
			st.insert(a[i]-i);
		}
		set<long long>:: iterator it;
		for(it=st.begin();it!=st.end(); it++)
		{
			cnt+=((mp[*it])*((mp[*it])-1))/2;
		}
		cout<<cnt<<endl;
	}
	return 0;
}