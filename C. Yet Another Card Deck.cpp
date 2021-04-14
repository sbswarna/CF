#include<bits/stdc++.h>
using namespace std;
int a[300005],q,n,tst,t[300005];
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
	int index[55]={0};
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(index[a[i]]==0)
			index[a[i]]=i;
	}
	for(int i=1;i<=q;i++)
	{
		cin>>t[i];
		cout<<index[t[i]]<<" ";
		for(int j=1;j<=50;j++)
		{
			//cout<<index[j]<<" ";
			if(index[j]>0&&index[j]<index[t[i]])
				index[j]++;
		}
		index[t[i]]=1;
	}
	return 0;
}