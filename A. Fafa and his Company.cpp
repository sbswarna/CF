#include<bits/stdc++.h>
using namespace std;
int n;
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
	int cnt=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}