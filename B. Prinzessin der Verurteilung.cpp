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
		cin>>n;
		cin>>s;
		int f=0;
		for(int i=0;i<26;i++)
		{
			string t;
			t.push_back(i+'a');
			if(s.find(t)>=string::npos)
			{
				f=1;
				cout<<t<<endl;
				break;
			}
		}
		if(f==0)
		{
			for(int i=0;i<26;i++)
			{
				string t;
				t.push_back(i+'a');
				for(int j=0;j<26;j++)
				{
					if(j==0)
					{
						t.push_back(j+'a');
					}
					else
					{
						t[1]=j+'a';
					}
					if(s.find(t)>=string::npos)
					{
						f=1;
						cout<<t<<endl;
						break;
					}
				}
				if(f==1)
					break;
			}
			if(f==0)
			{
				for(int i=0;i<26;i++)
				{
					string t="###";
					t[0]=i+'a';
					for(int j=0;j<26;j++)
					{
						t[1]=j+'a';
						for(int k=0;k<26;k++)
						{
							t[2]=k+'a';
							if(s.find(t)>=string::npos)
							{
								f=1;
								cout<<t<<endl;
								break;
							}
						}
						if(f==1)
							break;
					}
					if(f==1)
						break;
				}
			}
		}
	}
	return 0;
}