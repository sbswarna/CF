#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int>p[100005];
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
	sort(p,p+n);
	int f=0;
	for(int i=1;i<n;i++)
	{
		if(p[i].first>p[i-1].first)
		{
			if(p[i].second<p[i-1].second)
			{
				f=1;
				break;
			}
		}
	}
	if(f==1)
	{
		cout<<"Happy Alex"<<endl;
	}
	else
	{
		cout<<"Poor Alex"<<endl;
	}
	return 0;
}