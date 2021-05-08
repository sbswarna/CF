#include<bits/stdc++.h>
using namespace std;
int tst,x,n,k;
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
		cin>>n>>x>>k;
		if(x%k==0)
			cout<<"YES"<<endl;
		else
		{
			
			if((n+1-x)%k==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}