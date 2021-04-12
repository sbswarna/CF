#include<bits/stdc++.h>
using namespace std;
int n,k,tst,a[105];
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
		cin>>n>>k;
		if(k==0)
		{
			for(int i=1;i<=n;i++)
				cout<<i<<" ";
			cout<<endl;
		}
		else
		{
			if(n%2==0&&k>=n/2)
				cout<<-1<<endl;
			else if(n%2==1&&k>n/2)
				cout<<-1<<endl;
			else
			{
				int p=n,in;
				for(int i=2;i<=n;i+=2)
				{
					//cout<<i<<" ";
					a[i]=p;
					p--;
					k--;
					if(k==0)
					{
						in=i;
						break;
					}
				}
				//cout<<endl;
				p=1;
				for(int i=1;i<in;i+=2)
				{
					a[i]=p++;
				}
				for(int i=in+1;i<=n;i++)
					a[i]=p++;
				for(int i=1;i<=n;i++)
					cout<<a[i]<<" ";
				cout<<endl;
			}
		}
	}
	return 0;
}