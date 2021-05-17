#include<bits/stdc++.h>
using namespace std;
int tst,n,u[200005],s[200005];

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
	scanf("%d",&tst);
	while(tst--)
	{
		cin>>n;
		vector<long long>v[200005];
		for(int i=1;i<=n;i++)
		{
			cin>>u[i];
		}
		for(int i=1;i<=n;i++)
		{
			cin>>s[i];
			v[u[i]].push_back(s[i]);
		}
		long long sum[200005]={0};
		for(int i=1;i<=n;i++)
		{
			if(v[i].size()>0)
			{
				sort(v[i].begin(),v[i].end(),greater<long long>());
				for(int j=1;j<v[i].size();j++)
				{
					v[i][j]+=v[i][j-1];
				}
				for(int j=1;j<=n;j++)
				{
					int s=v[i].size();
					s=s-(s%j)-1;
					if(s>=0&&s<v[i].size())
						sum[j]+=v[i][s];
					else
						break;
				}
			}
		}
		for(int i=1;i<=n;i++)
			printf("%lld ",sum[i]);
		printf("\n");
	}
	return 0;
}