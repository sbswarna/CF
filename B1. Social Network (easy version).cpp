#include<bits/stdc++.h>
using namespace std;
long long n,k,id[205];
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
		if(find(dq.begin(), dq.end(), id[i]) ==dq.end())
		{
			dq.push_front(id[i]);
			if(dq.size()>k)
				dq.pop_back();
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