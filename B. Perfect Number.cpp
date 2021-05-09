#include<bits/stdc++.h>
using namespace std;
long long k;
vector<long long> v;
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
	long long n,k;
	k=10000;
	n=19;
	while(true)
	{
		long long x=n,sum=0;
		while(x>0)
		{
			sum+=(x%10);
			x=x/10;
		}
		if(sum==10)
			v.push_back(n);
		n++;
		if(v.size()==k)
			break;
	}
	cin>>k;
	cout<<v[k-1]<<endl;
	return 0;
}