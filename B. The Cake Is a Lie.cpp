#include<bits/stdc++.h>
using namespace std;
long long n,m,k,tst;
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
		cin>>n>>m>>k;
		if(m-1+(m*(n-1))==k||n-1+(n*(m-1))==k)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}