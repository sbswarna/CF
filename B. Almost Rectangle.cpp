#include<bits/stdc++.h>
using namespace std;
int tst,n;
char s[404][404];
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
		int f=0;
		int in1,in2,in3,in4;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>s[i][j];
				if(s[i][j]=='*')
				{
					if(f==0)
					{
						in1=i;
						in2=j;
						f=1;
					}
					else
					{
						in3=i;
						in4=j;
					}
				}
			}
		}
	if(in1!=in3&&in2!=in4)
	{
		s[in1][in4]='*';
		s[in3][in2]='*';
		
	}
	else
	{
		if(in1==in3)
		{
			if(in1+1<n)
			{
			s[in1+1][in2]='*';
			s[in1+1][in4]='*';
		}
		else
		{
			s[in1-1][in2]='*';
			s[in1-1][in4]='*';
		}
		}
		if(in2==in4)
		{
			if(in2+1<n)
			{
			s[in1][in2+1]='*';
			s[in3][in2+1]='*';
		}
		else
		{
			s[in1][in2-1]='*';
			s[in3][in2-1]='*';
		}
		}
	}
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<s[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}