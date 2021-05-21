#include<bits/stdc++.h>
using namespace std;
long long tst,n,k;
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
		long long x=n,cnt=0;
		while(x>=1)
		{
			x=x/2;
			cnt++;
		}
		long long ans=pow(2,cnt-1)-1;
		cout<<ans<<endl;
	}
	return 0;
}