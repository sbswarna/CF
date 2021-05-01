#include<bits/stdc++.h>
using namespace std;
int n;
string s,t;
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
	cin>>s;
	if(n%2==1)
	{
		for(int i=0;i<n;i++)
		{
			if(i%2==1)
			{
				string u="";
				u.push_back(s[i]);
				t=u+t;
			}
			else
			{
				t.push_back(s[i]);
			}
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				string u="";
				u.push_back(s[i]);
				t=u+t;
			}
			else
			{
				t.push_back(s[i]);
			}
		}
	}
	cout<<t<<endl;
	return 0;
}