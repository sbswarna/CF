#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
pair<long long,long long>p[100005];
map<long long,long long>mp;
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
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i].first>>p[i].second;
	}
	p[n].first=LONG_LONG_MAX,p[n].second=LONG_LONG_MAX;
	cnt=1;
	long long th=p[0].first;
	long long tf=p[0].first-p[0].second;
	if(tf>=p[1].first)
	{
		tf=p[0].first+p[0].second;
	}
	long long occupiedx=min(th,tf),occupiedy=max(tf,th),x,y;
	for(long long i=1;i<n;i++)
	{
		x=p[i].first;
		y=p[i].first-p[i].second;
		if(x>=occupiedx&&x<=occupiedy)
		{
			cout<<"nibona"<<endl;
			continue;
		}
		else
		{
			//cout<<x<<" "<<y<<" "<<occupiedx<<" "<<occupiedy<<endl;
			if(y>=occupiedx&&y<=occupiedy||y<=occupiedx||y<=p[i-1].first)
			{
				//cout<<"F"<<endl;
				y=p[i].first+p[i].second;
				//cout<<y<<endl;
				if(y>=occupiedx&&y<=occupiedy||y<=occupiedx||y>=p[i+1].first)
				{
					continue;
				}
				else
				{
					occupiedx=min(x,min(y,min(th,tf)));
					occupiedy=max(x,max(y,max(th,tf)));
					cnt++;
				}
			}
			else
			{
				occupiedx=min(occupiedx,min(x,min(y,min(th,tf))));
				occupiedy=max(occupiedy,max(x,max(y,max(th,tf))));
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}