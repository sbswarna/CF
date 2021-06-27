#include<bits/stdc++.h>
using namespace std;
int tst,n,a[60];
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
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		double avg=sum/(n*1.00);
		if(avg==1)
			cout<<0<<endl;
		else
		{
			if(sum<=n)
				cout<<1<<endl;
			else
				cout<<sum-n<<endl;
		}
	}
	return 0;
}