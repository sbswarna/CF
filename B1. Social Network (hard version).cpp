#include<bits/stdc++.h>
using namespace std;
long long n,k,id[200005];
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
	cin>>n>>k;
	deque<long long>dq;
	for(int i=1;i<=n;i++)
	{
		cin>>id[i];
		if(mp[id[i]]!=1)
		{
			dq.push_front(id[i]);
			mp[id[i]]=1;
			if(dq.size()>k)
			{
				mp[dq.back()]=2;
				dq.pop_back();
			}
		}
	}
	cout<<dq.size()<<endl;
	while(dq.size()>0)
	{
		cout<<dq.front()<<" ";
		dq.pop_front();
	}
	cout<<endl;
	return 0;
}