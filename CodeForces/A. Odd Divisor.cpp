#include<bits/stdc++.h>
using namespace std;
long long tst,n;
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
		int f=0;
		if(n==2)
			cout<<"NO"<<endl;
		else if(n==3)
			cout<<"YES"<<endl;
		else
		{
			if(n%2==1)
				cout<<"YES"<<endl;
			else
			{
				int x,f=0;
				while(n>1)
				{
					x=n%2;
					n=n/2;
					if(x==1)
					{
						f=1;
						break;
					}
				}
				if(f==0)
					cout<<"NO"<<endl;
				else
					cout<<"YES"<<endl;
			}	
		}
	
	}
	return 0;
}