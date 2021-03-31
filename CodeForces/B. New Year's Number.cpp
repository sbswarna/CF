#include<bits/stdc++.h>
using namespace std;
long long tst,n;
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
		cin>>n;
		if(n<2020)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			int x=n/2020;
			int y=n%2020;
			if(y<=x)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}