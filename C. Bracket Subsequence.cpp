#include<bits/stdc++.h>
using namespace std;
long long n,k;
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
	cin>>n>>k;
	cin>>s;
	int p,x=0;
	string t;
	stack<char>stk;
	for(int i=0;i<s.size();i++)
	{
		int x=t.size();
		if(t.size()<k)
		{
			if(s[i]=='(')
			{
				if((x-stk.size())+(stk.size()*2)+2<=k)
				{
					stk.push('(');
					t.push_back('(');
				}
			}
			else
			{
				if(!stk.empty())
				{
					while(!((x-stk.size())+(stk.size()*2)<=k))
					{
						stk.pop();
					}
					t.push_back(')');
					stk.pop();
				}
			}
		}
	}
	cout<<t<<endl;
	return 0;
}