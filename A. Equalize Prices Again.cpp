#include<bits/stdc++.h>
using namespace std;
long long tst,n,a[105];
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
		long long sum=0,ans,f=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n==0)
			sum/=n;
		else
			sum=(sum/n)+1;
		sort(a,a+n);
		int lo=lower_bound(a,a+n,sum)-a;
		if(a[lo]==sum)
			cout<<a[lo]<<endl;
		else
			cout<<sum<<endl;
	}
	return 0;
}