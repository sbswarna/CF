#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
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
	long long mx=-1,cnt=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i>0)
		{
			if(a[i]>=a[i-1])
				cnt++;
			else
			{
				mx=max(mx,cnt+1);
				cnt=0;
			}
		}
	}
	cout<<max(mx,cnt+1)<<endl;
	return 0;
}