#include<bits/stdc++.h>
using namespace std;
long long n,tst;
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
		long long x=n,cnt=0,sum=0,ans=0;
		while(true)
		{
			cnt=0;
			long long r=x;
			while(x>0)
			{
				x=x/10;
				cnt++;
			}
			if(n-sum<(2050*pow(10,cnt-4)))
				cnt--;
			for(int i=cnt-4;i>=1;i--)
			{
				long long p=(2050*pow(10,i));
				long long y=r/p;
				if(sum+(p*y)<=n)
				{
					sum+=(p*y);
					ans+=y;
				}
				else
					break;
			}	
			//cout<<"sum="<<sum<<endl;
			//cout<<"n-sum="<<n-sum<<endl;
			x=n-sum;
			if(x<=0)
				break;
			else if(x<20500)
			{
				long long t=x/2050;
				if(x%2050!=0)
				{
					ans=-1;
				}
				else
				{
					ans+=t;
				}
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}