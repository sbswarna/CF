#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
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
	int x=0;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		if(s[0]=='X')
		{
			if(s[1]=='+')
				x++;
			else
				x--;
		}
		else
		{
			if(s[0]=='+')
				x++;
			else
				x--;
		}
	}
	cout<<x<<endl;
	return 0;
}