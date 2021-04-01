#include<bits/stdc++.h>
using namespace std;
int n,x,a[1005];
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
	cin>>n>>x;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(abs(sum)<=x)
		cout<<1<<endl;
	else
	{
		int y=abs(sum);
		int p=y/x;
		if(y%x>0)
		{
			cout<<p+1<<endl;
		}
		else
		{
			cout<<p<<endl;
		}
	}
	return 0;
}