#include<bits/stdc++.h>
using namespace std;
int tst,n,a[1005];
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
		int mn=99999,p,q;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(i>0)
			{
				if(abs(a[i]-a[i-1])<mn)
				{
					mn=abs(a[i]-a[i-1]);
					p=i+1;
					q=i;
				}
			}
		}
		if(abs(a[0]-a[n-1])<mn)
		{
			mn=abs(a[0]-a[n-1]);
			p=1;
			q=n;
		}
		cout<<p<<" "<<q<<endl;
	
	return 0;
}