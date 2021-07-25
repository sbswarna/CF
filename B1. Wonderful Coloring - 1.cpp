#include<bits/stdc++.h>
using namespace std;
long long tst;
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
	//int k=1;
	while(tst--)
	{
		cin>>s;
		int color[30]={0},red=0,green=0;
		for(int i=0;i<s.size();i++)
		{
			if(color[s[i]-'a']==0)
			{
				color[s[i]-'a']=1;
				red++;
			}
			else if(color[s[i]-'a']==1)
			{
				color[s[i]-'a']=2;
				green++;
			}
		}
		//cout<<k<<" = "<<s<<" = ";
		if(red==green)
			cout<<red<<endl;
		else
		{
			if(red>green)
				cout<<(red+green)/2<<endl;
			else
				cout<<red<<endl;
		}
		//k++;
	}
	return 0;
}