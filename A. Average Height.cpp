#include<bits/stdc++.h>
using namespace std;
int tst,a[2005],n;
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
		vector<int>ev,od;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
				ev.push_back(a[i]);
			else
				od.push_back(a[i]);
		}
		for(int i=0;i<ev.size();i++)
			cout<<ev[i]<<" ";
		for(int i=0;i<od.size();i++)
			cout<<od[i]<<" ";
		cout<<endl;
	}
	return 0;
}