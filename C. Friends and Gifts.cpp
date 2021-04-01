#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
vector<int>giftpaynai,giftdibe;
map<int,int>mp;
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
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mp[a[i]]=i;
		if(a[i]==0)
		{
			giftdibe.push_back(i);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(mp.find(i)==mp.end())
		{
			giftpaynai.push_back(i);
		}
	}
	int k=giftpaynai.size()-1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			if(i!=giftpaynai[k])
			{
				a[i]=giftpaynai[k];
				giftpaynai.erase(giftpaynai.begin()+k);
				k--;
			}
		}
	}
	int x=-1,y=-1;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			x=i;
		}
	}
	if(x!=-1)
	{
		if(giftpaynai.size()>0)
		{
			y=giftpaynai[0];
		}
		if(x!=y)
		{
			a[x]=y;
		}
		else
		{

			a[x]=x;
			for(int i=1;i<=n;i++)
			{
				if(i!=x)
				{
					if(a[i]!=x&&find(giftdibe.begin(),giftdibe.end(),i)!=giftdibe.end())
					{
						swap(a[i],a[x]);
						break;
					}
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}