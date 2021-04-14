#include<bits/stdc++.h>
using namespace std;
int a,b,c,tst;
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
		cin>>a>>b>>c;
		if(a==b&&b==c)
		{
			for(int i=1;i<=a;i++)
				cout<<1;
			cout<<" ";
			for(int i=1;i<=a;i++)
				cout<<1;
			cout<<endl;
		}
		else
		{
			string x,y;
			/*int p=1;
			for(int i=0;i<c-1;i++)
			{
				p=(p*10);
			}
			cout<<p<<endl;*/
			if(a==c)
			{
				for(int i=1;i<c;i++)
					x="0"+x;
				x="1"+x;
			}
			else
			{
				for(int i=1;i<c;i++)
					x="0"+x;
				x="1"+x;
				for(int i=1;i<a-c;i++)
				{
					x="0"+x;
				}
				x="2"+x;
			}
			if(b==c)
			{
				for(int i=1;i<c;i++)
					y="0"+y;
				y="1"+y;
			}
			else
			{
				for(int i=1;i<b;i++)
				{
					y="0"+y;
				}
				y="1"+y;
			}			
			cout<<x<<" "<<y<<endl;
		}
	}
	return 0;
}