#include<bits/stdc++.h>
using namespace std;
string s;
int n;
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
	if(n<=3)
	{
		if(n==1)
			cout<<"a"<<endl;
		else if(n<=2)
			cout<<"b"<<endl;
		else
			cout<<"c"<<endl;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(i%4==1)
				s+="a";
			else if(i%4==2)
				s+="b";
			else if(i%4==3)
				s+="c";
			else
				s+="d";
		}
		cout<<s<<endl;
	}
	return 0;
}