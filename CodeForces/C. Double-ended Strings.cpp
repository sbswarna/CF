#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int tst,l[30][30];
void F()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif 
}
int main()
{
	F();
	cin>>tst;
	while(tst--)
	{
		cin>>s1>>s2;
		int l1=s1.size(),l2=s2.size(),mx=-1;
		for(int k=0;k<l1;k++)
		{
			string t="";
			for(int i=k;i<l1;i++)
			{
				t.push_back(s1[i]);
				if(s2.find(t)!=string::npos)
				{
					int x=t.size();
					mx=max(mx,x);
				}
			}
		}
		if(mx==-1)
			mx=0;
		cout<<l1+l2-(2*mx)<<endl;
	}
	return 0;
}