#include<bits/stdc++.h>
using namespace std;
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
	double n,m,a,b;
	cin>>n>>m;
	double mn=99999999.00;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		mn=min(mn,(a*1.00)/(b*1.00));
	}
	printf("%.8lf\n", mn*m);
	return 0;
}