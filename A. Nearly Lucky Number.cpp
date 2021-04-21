#include<bits/stdc++.h>
using namespace std;
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
	cin>>s;
	int cnt=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='7'||s[i]=='4')
			cnt++;
	}
	int f=0,x=cnt;
	while(cnt>0)
	{
		if(cnt%10!=7&&cnt%10!=4)
		{
			f=1;
			break;
		}
		cnt=cnt/10;
	}
		if(f==1||x==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	
	return 0;
}