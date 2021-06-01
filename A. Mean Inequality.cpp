#include<bits/stdc++.h>
using namespace std;
long long tst,n,a[80];
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
		for(int i=0;i<2*n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+(2*n));
		vector<long long>v;
		for(int i=(2*n)-1;i>=n;i--)
		{
			cout<<a[i]<<" ";
			v.push_back(a[i]);
			v.push_back(a[(2*n)-1-i]);
		}
		cout<<endl;
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}