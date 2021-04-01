#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a[109],n,m,k,i,p,q;
	cin>>n>>m>>k;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=m-1;i>=1;i--)
	{
		if(a[i]!=0)
		{
			if(a[i]<=k)
			{
				p=i*10;
				break;
			}
		}
	}
	for(i=m+1;i<=n;i++)
	{
		if(a[i]!=0)
		{
			if(a[i]<=k)
			{
				q=i*10;
				break;
			}
		}
	}
	if(abs(p-(m*10))<(abs(q-m*10)))
	{
		cout<<abs(p-(m*10))<<endl;
	}
	else
	{
		cout<<abs(q-(m*10))<<endl;
	}
	return 0;
}
