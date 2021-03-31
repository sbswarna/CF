#include<bits/stdc++.h>
using namespace std;
long long tst,n,a,w;
vector<long long>v;
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
		cin>>n>>w;
		for(int i=1;i<=n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		long long cnt=0;
		long long x=w;
		vector<long long>::iterator it;
		while(v.size()>0)
		{
			it=upper_bound(v.begin(),v.end(),x);
			long long in=it-v.begin()-1;
			//cout<<x<<" "<<in<<endl;
			if(v[in]<x)
			{
				x-=v[in];
				v.erase(v.begin()+in);
			}
			else if(v[in]==x)
			{
				//cout<<"F"<<endl;
				cnt++;
				x=w;
				v.erase(v.begin()+in);
			}
			else 
			{
				cnt++;
				x=w;
			}
			/*for(int i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl<<endl;*/
		}
		if(x!=w)
			cnt++;
		cout<<cnt<<endl;
		v.clear();
	}
	return 0;
}