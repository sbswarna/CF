#include<bits/stdc++.h>
using namespace std;
int tst,n,a[2005];
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
		int sum=0,cnte=0,cnto=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]%2==0)
				cnte++;
			else
				cnto++;
		}
		if(sum%2==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			if(cnte==n)
				cout<<"NO"<<endl;
			else
			{
				if(cnto==n&&n%2==0)
					cout<<"NO"<<endl;
				else
					cout<<"YES"<<endl;
			}
		}
	}
	return 0;
}