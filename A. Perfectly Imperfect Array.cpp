#include<bits/stdc++.h>
using namespace std;
long long tst,n,d,a[105];
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
		int f=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			long long p=sqrt(a[i]);
			if(p*p!=a[i])
			{
				f=1;
			}
		}
		if(f==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}