#include<bits/stdc++.h>
using namespace std;
long long n,d,a[1005];
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
	cin>>n>>d;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	long long cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]-a[i]<=d)
				cnt+=2;
			else
				break;
		}
	}
	cout<<cnt<<endl;
	return 0;
}