#include<bits/stdc++.h>
using namespace std;
int tst,s[10];
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
		cin>>s[0]>>s[1]>>s[2]>>s[3];
		int x=max(s[0],s[1]);
		int y=max(s[2],s[3]);
		sort(s,s+4);
		if(x==s[2])
		{
			if(y==s[3])
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else if(x==s[3])
		{
			if(y==s[2])
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}