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
		int mn=200,mx=-200,minmx=200,minmn=200,p,q;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			mx=max(mx,a[i]);
			mn=min(mn,a[i]);
		}
		//cout<<mn<<" "<<mx<<endl;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==mx)
			{
				if(i<n-i)
				{
					if(minmx>i)
					{
						minmx=i,p=i;
					}
				}
				else
				{
					if(n-i<minmx)
					{
						minmx=n-i,p=i;
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]==mn)
			{
				if(i<n-i)
				{
					if(minmn>i)
					{
						minmn=i,q=i;
					}
				}
				else
				{
					if(n-i<minmn)
					{
						minmn=n-i,q=i;
					}
				}
			}
		}
		//cout<<minmx<<" "<<minmn<<" "<<p<<" "<<q<<endl;
		int ans,x=(n/2)+(n%2);
		//cout<<x<<endl;
		if(q<x&&p>x)
		{
			ans=min(min(q+n-p+1,max(p,q)),max(n-p+1,n-q+1));
		}
		else if(p<x&&q>x)
		{
			ans=min(min(p+n-q+1,max(p,q)),max(n-p+1,n-q+1));
		}
		else if(q<x&&p<x)
		{
			ans=max(p,q);
		}
		else if(q>x&&p>x)
		{
			ans=max(n-p+1,n-q+1);
		}
		else if(q==x&&p>x)
		{
			ans=min(q+(n-p+1),max(n-q+1,n-p+1));
		}
		else if(q==x&&p<x)
		{
			ans=min(max(p,q),p+n-q+1);
		}
		else if(p==x&&q<x)
		{
			ans=min(max(p,q),q+n-p+1);
		}
		else
		{
			ans=min(p+(n-q+1),max(n-p+1,n-q+1));
		}
		cout<<ans<<endl;
	}
	return 0;
}