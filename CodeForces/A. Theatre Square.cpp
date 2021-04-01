#include<bits/stdc++.h>
using namespace std;
long long n,m,a;
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
	cin>>n>>m>>a;
	long long x=n/a;
	long long y=m/a;
	if(n%a>0)
		x++;
	if(m%a>0)
		y++;
	cout<<x*y<<endl;
	return 0;
}