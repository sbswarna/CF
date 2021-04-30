#include<bits/stdc++.h>
using namespace std;
long long n,r,avg;
pair<long long,long long>p[100005];
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
	cin>>n>>r>>avg;
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>p[i].second>>p[i].first;
		sum+=p[i].second;;
	}
	long long x=sum/n,cnt=0;
	if(x>=avg)
		cout<<0<<endl;
	else
	{
		sort(p,p+n);
		int k;
		for(int i=0;i<n;i++)
		{
			long long c=abs((p[i].second)-r);
			//cout<<c<<" "<<x<<" "<<sum<<endl;
			if(c>0)
			{
				if(x<avg)
				{
					if(c>(avg*n)-sum)
						c=(avg*n)-sum;
					x=(sum+c)/n;
					sum+=c;
					cnt+=(p[i].first*c);
					p[i].second+=c;
				}
				else
					break;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}