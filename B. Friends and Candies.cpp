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
		long long sum=0,cnt=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		long long avg=sum/n;
		if(sum%n>0)
			cout<<-1<<endl;
		else
		{
			for(int i=0;i<n;i++)
			{
				if(a[i]>avg)
					cnt++;
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}