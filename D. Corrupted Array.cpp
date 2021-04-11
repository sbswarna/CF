#include<bits/stdc++.h>
using namespace std;
long long tst,n,a[200005];
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
		for(int i=0;i<n+2;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n+2);
		long long sum=0,f=0;
		for(int i=0;i<=n;i++)
		{
			sum+=a[i];
		}
		if(sum-a[n]==a[n])
		{
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
		else
		{
			if(sum>a[n+1])
			{
				long long p=sum-a[n+1];
				//cout<<"p="<<p<<endl;
				if(binary_search(a,a+n+1,p))
				{
					int f=0;
					for(int i=0;i<=n;i++)
					{
						if(a[i]==p&&f==0)
						{
							f=1;
							continue;
						}
						else
						{
							cout<<a[i]<<" ";
						}
					}
					cout<<endl;
				}
				else
				{
					cout<<-1<<endl;
				}
			}
			else
				cout<<-1<<endl;
		}
	}
	return 0;
}