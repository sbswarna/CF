#include<bits/stdc++.h>
using namespace std;
long long n;
void F()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif 
}
int main(int argc, char const *argv[])
{
	cin>>n;
	if(n<=2)
	cout<<"NO"<<endl;
	else
	{
		n=n-2;
		if(n%2==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}