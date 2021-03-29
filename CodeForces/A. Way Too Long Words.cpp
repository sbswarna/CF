#include<bits/stdc++.h>
using namespace std;
int tst;
string s;
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
		cin>>s;
		if(s.size()<=10)
		{
			cout<<s<<endl;
		}
		else
		{
			cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
		}
	}
}