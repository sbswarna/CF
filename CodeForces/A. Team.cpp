#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,cnt;
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
	cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		if(a==1&&b==1||a==1&&c==1||b==1&&c==1)
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}