#include<bits/stdc++.h>
using namespace std;
long long b,r,d,tst;
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
		cin>>r>>b>>d;
		int f=0;
		long long x=min(r,b);
		if(x==r)
		{
			long long y=b/x;
			if(b%x==0)
			{
				if(y-1<=d)
					f=1;
			}
			else
			{
				if((y-1<=d)&&(y<=d))
					f=1;
			}
		}
		else
		{
			long long y=r/x;
			if(r%x==0)
			{
				if(y-1<=d)
					f=1;
			}
			else
			{
				if((y-1<=d)&&(y<=d))
					f=1;
			}
		}
		if(f==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}