#include<bits/stdc++.h>
using namespace std;
string s;
int t,n;
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
	cin>>n>>t;
	cin>>s;
	int p;
	while(t--)
	{
		for(int i=0;i<n-1;i=i+p)
		{
			if(s[i]=='B'&&s[i+1]=='G')
			{
				p=2;
				swap(s[i],s[i+1]);
			}
			else
			{
				p=1;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}