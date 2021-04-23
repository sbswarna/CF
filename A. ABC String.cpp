#include<bits/stdc++.h>
using namespace std;
int tst,n;
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
	cin>>tst;
	while(tst--)
	{
		cin>>s;
		stack<char>stk;
		if(s[0]==s[s.size()-1])
		{
			cout<<"NO"<<endl;
		}
		else
		{
			char a=s[0],b=s[s.size()-1];
			int f=0;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]==a)
				{
					stk.push('(');
				}
				else
				{
					if(!stk.empty())
						stk.pop();
					else
					{
						f=1;
						break;
					}
				}
			}
			if(stk.size()==0&&f==0)
				cout<<"YES"<<endl;
			else
			{
				stk=stack<char>();
				f=0;
				for(int i=0;i<s.size();i++)
				{
					if(s[i]==b)
					{
						if(!stk.empty())
							stk.pop();
						else
						{
							f=1;
							break;
						}
					}
					else
					{
						stk.push('(');
					}
				}
				cout<<stk.size()<<endl;
				cout<<f<<endl;
				if(stk.size()==0&&f==0)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}