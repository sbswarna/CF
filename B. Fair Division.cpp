#include<bits/stdc++.h>
using namespace std;
int tst,n,a[105];
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
		cin>>n;
		int no1=0,no2=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
				no1++;
			else
				no2++;
		}
		if(no2%2==0&&no1%2==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			if(no1%2==0&&no1>0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}