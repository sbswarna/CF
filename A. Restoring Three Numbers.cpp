#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d;
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
	cin>>a>>b>>c>>d;
	long long sum=max({a,b,c,d});
	a=sum-a;
	b=sum-b;
	c=sum-c;
	d=sum-d;
	if(a==0)
	{
		cout<<b<<" "<<c<<" "<<d<<endl;
	}
	else if(b==0)
	{
		cout<<a<<" "<<c<<" "<<d<<endl;
	}
	else if(c==0)
	{
		cout<<b<<" "<<a<<" "<<d<<endl;
	}
	else
	{
		cout<<b<<" "<<c<<" "<<a<<endl;
	}
	return 0;
}