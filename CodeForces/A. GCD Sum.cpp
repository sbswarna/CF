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
int main()
{
	F();
	cin>>tst;
	while(tst--)
	{
		cin>>n;
		while(true)
		{
			long long x=n,sum=0;
			while(x>0)
			{
				sum+=(x%10);
				x=x/10;
			}

			if(__gcd(sum,n)>1)
			{
				cout<<n<<endl;
				break;
			}
			else
				n++;
		}
	}
	return 0;
}