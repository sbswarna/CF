#include<bits/stdc++.h>
using namespace std;
long long tst,m,n,x;
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
		cin>>n>>m>>x;
		long long p=x/n;
		long long q=x%n;
		long long x1,y1;
		if(q>0)
		{
			y1=p+1;
			x1=q;
		}
		else
		{
			y1=p;
			x1=n;
		}
		cout<<(m*x1)-(m-y1)<<endl;
	}
	return 0;
}