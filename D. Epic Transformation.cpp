#include<bits/stdc++.h>
using namespace std;
long long tst,n,a[2000005];
void F()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif 
}
int main()
{
	F();
	cin>>tst;
	while(tst--)
	{
		cin>>n;
		map<long long,int>mp;
		int mx=-1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
			mx=max(mp[a[i]],mx);
		}
		if(n-mx>=mx)
		{
			if(n%2==0)
			cout<<0<<endl;
		else
			cout<<1<<endl;
		}		
		else
		{
			cout<<abs(n-(2*mx))<<endl;
		}
	}
	return 0;
}