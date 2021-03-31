#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
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
	cin>>n>>k;
	int cnt=0,f=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>0)
			f=1;
	}
	if(f==0)
		cnt=0;
	else{
	for(int i=0;i<n;i++)
	{
		if(a[i]>=a[k-1]&&a[i]>0)
			cnt++;
	}
}
	cout<<cnt<<endl;
}