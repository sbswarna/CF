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
	cin>>s;
	cout<<s;
	for(int i=s.size()-1;i>=0;i--)
	{
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}