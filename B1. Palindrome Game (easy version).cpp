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
		if(n==1)
		{
			if(s[0]=='1')
				cout<<"DRAW"<<endl;
			else
				cout<<"BOB"<<endl;
		}
		else
		{
			int z=0,o=0;
			for(int i=0;i<n;i++)
			{
				if(s[i]=='0')
					z++;
				else
					o++;
			}
			if(o>0&&z==0)
				cout<<"BOB"<<endl;
			else if(z>0&&o==0)
			{
				if(n%2==0)
					cout<<"BOB"<<endl;
				else
					cout<<"ALICE"<<endl;
			}
			else
			{
				if(n%2==1)
				{
					if(s[n/2]=='1'||z==1)
					{
						cout<<"BOB"<<endl;
					}
					else
					{
						cout<<"ALICE"<<endl;
					}
				}
				else
				{
					cout<<"BOB"<<endl;
				}
			}
		}
	}
	return 0;
}