#include<bits/stdc++.h>
using namespace std;
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
	string t;
	cin>>s;
	int p=1;
	s+="#";
	for(int i=0;i<s.size();i+=p)
	{
		if(s[i]=='.')
		{
			p=1;
			t+="0";
		}
		else if(s[i]=='-')
		{
			if(s[i+1]=='.')
			{
				t+="1";
			}
			else
			{
				t+="2";
			}
			p=2;
		}
	}
	cout<<t<<endl;
	return 0;
}