#include<bits/stdc++.h>
using namespace std;
int tst,n,prime[3005];
vector<int>v;
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
	for(int i=4;i<=3000;i+=2)
		prime[i]=1;
	prime[0]=1;
	prime[1]=1;
	for(int i=3;i<=sqrt(3000);i+=2)
	{
		for(int j=i*i;j<=3000;j+=i)
			prime[j]=1;
	}
	v.push_back(2);
	for(int i=3;i<=3000;i+=2)
	{
		if(prime[i]!=1)
			v.push_back(i);
	}
	int cnt=0;
	map<int,int>mp;
	mp[1]=0;
	mp[0]=0;
	for(int j=2;j<=3000;j++)
	{
		cnt=0;
		for(int i=0;i<v.size();i++)
		{
			if(j%v[i]==0&&v[i]<=j)
				cnt++;
			if(cnt>2)
				break;
		}
		if(cnt==2)
			mp[j]=mp[j-1]+1;
		else
			mp[j]=mp[j-1];
	}
	cin>>n;
	cout<<mp[n]<<endl;
	return 0;
}