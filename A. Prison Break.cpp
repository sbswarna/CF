#include<bits/stdc++.h>
using namespace std;
int a,b,tst;
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
		cout<<a*b<<endl;
	}
	return 0;
}