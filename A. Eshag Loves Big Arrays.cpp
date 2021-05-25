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
		set<int>st;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			st.insert(a[i]);
		}
		if(st.size()==1)
			cout<<0<<endl;
		else
		{
			int cnt=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]!=(*st.begin()))
					cnt++;
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}