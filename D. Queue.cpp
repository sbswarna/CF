#include<bits/stdc++.h>
using namespace std;
long long n,a[100005];
priority_queue<long long>pq;
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
		cin>>a[i];
		pq.push(a[i]*-1);
	}
	long long cnt=0,sum=0;
	while(!pq.empty())
	{
		long long x=pq.top()*-1;
		//cout<<x<<" "<<sum<<endl;
		pq.pop();
		if(sum<=x)
		{
			cnt++;
		}
		if(x>=sum)
			sum+=x;
	}
	cout<<cnt<<endl;
	return 0;
}