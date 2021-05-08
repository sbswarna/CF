#include<bits/stdc++.h>
using namespace std;
long long tst,a,b;
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
		cin>>a>>b;
		if(b==1)
			cout<<"NO"<<endl;
		else
		{
		long long x=a*b;
		long long y=a*(b+1);
		long long z=x+y;
		cout<<"YES"<<endl;
		cout<<x<<" "<<y<<" "<<z<<endl;
		}
	}
	return 0;
}