#include<bits/stdc++.h>
using namespace std;
int n,w[105],x,tst;
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
		vector<int>v,ans;
		int sum=0,f=0;
		cin>>n>>x;
		for(int i=0;i<n;i++)
		{
			cin>>w[i];
			if(w[0]==x&&f==0)
			{
				f=1;
				v.push_back(w[i]);
			}
			else
			{
				if(sum+w[i]==x)
				{
					v.push_back(w[i]);
				}
				else
				{
					sum+=w[i];
					ans.push_back(w[i]);
				}
			}
		}
		if(ans.size()==0)
			cout<<"NO"<<endl;
		else if(sum==x)
			cout<<"NO"<<endl;
		else if(ans.size()+v.size()<n)
			cout<<"NO"<<endl;
		else
		{
			sum=0;
			for(int i=0;i<ans.size();i++)
				sum+=ans[i];
			for(int i=0;i<v.size();i++)
				sum+=v[i];
			if(sum!=x)
			{
				cout<<"YES"<<endl;
				for(int i=0;i<ans.size();i++)
					cout<<ans[i]<<" ";
				for(int i=0;i<v.size();i++)
					cout<<v[i]<<" ";
				cout<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}