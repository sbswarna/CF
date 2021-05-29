#include<bits/stdc++.h>
using namespace std;
long long n,k;
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
	if(k>n)
	{
		if(k-n>n)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<n-(k/2)<<endl;
		}
	}
	else
	{
		cout<<(k-1)/2<<endl;
	}
	return 0;
}